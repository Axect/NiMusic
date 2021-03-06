import os, osproc, strutils, strformat, sequtils, re

let callYoutube: string = "youtube-dl --embed-thumbnail --format mp4 "
proc convertMp3(name: string, target: string): string = &"ffmpeg -i {name} -b:a 320K -vn {target}"

let weakSlugify = [(" ", ""), ("./", ""), ("&", "_")]
let strongSlugify = [("(", "\\("),(")", "\\)")]

proc main =
  let x = open("link.csv")

  # Downloading
  var candi: seq[string] = @[]
  for link in x.lines:
    # For Multiprocessing
    candi.add(callYoutube & link.string)
    echo(&"Downloading {link}...")
  let err1 = execProcesses(candi)
  
  if err1 != 1:
    echo err1

  # Slugify
  var candi2: seq[string] = @[]
  for file in walkDirRec "./":
    if file.match re".*\.mp4":
      let revid = multiReplace(file, weakSlugify)
      let remp3 = multiReplace(revid,[(".mp4", ".mp3")])
      # Rename File 
      moveFile(file, revid)
      
      let revid2 = multiReplace(revid, strongSlugify)
      let remp32 = "MP3/" & multiReplace(remp3, strongSlugify)
      let temp1 = convertMp3(revid2, remp32)
      # For Multiprocessing
      candi2.add(temp1)

      echo "Slugify Finish!"

  # Convert
  let err2 = execProcesses(candi2)
  if err2 != 0:
    echo err2

  # Move Pictures
  echo "\nMove Pictures.."
  let err3 = execProcesses(@["mv *.jpg Pictures/"])
  if err3 != 0:
    echo err3

  # Remove Mp4
  echo "\nRemove Mp4 files.."
  let err4 = execProcesses(@["rm *.mp4"])
  if err4 != 0:
    echo err4

  echo "\nAll Done!"


if isMainModule:
  main()
