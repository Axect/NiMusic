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
    candi.add(callYoutube & link.string)
    echo(&"Downloading {link}...")
  let err1 = execProcesses(candi)
  echo err1

  # Slugify
  var candi2: seq[string] = @[]
  for file in walkDirRec "./":
    if file.match re".*\.mp4":
      let revid = multiReplace(file, weakSlugify)
      let remp3 = multiReplace(revid,[(".mp4", ".mp3")])
      
      moveFile(file, revid)
      
      let revid2 = multiReplace(revid, strongSlugify)
      let remp32 = multiReplace(remp3, strongSlugify)
      let temp1 = convertMp3(revid2, remp32)
      
      candi2.add(temp1)

      echo "Slugify Finish!"

  let err2 = execProcesses(candi2)
  echo err2

  echo "All Done!"


if isMainModule:
  main()
