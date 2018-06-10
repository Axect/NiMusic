import os, osproc, strutils, strformat, sequtils, re

let callYoutube: string = "youtube-dl --embed-thumbnail --format mp4 "
proc convertMp3(name: string, target: string): string = &"ffmpeg -i {name} -b:a 320K -vn {target}"

let slugify = [("(", "\\("),(")", "\\)"), (" ", ""), ("./", ""), ("&", "_")]

proc main =
  let x = open("link.csv")
  # Downloading
  for link in x.lines:
    let output = execProcess(callYoutube & link.string)
    echo(&"Downloading {link}...")
    echo output

  # Slugify
  var vids: seq[string] = @[]
  var mp3s: seq[string] = @[]
  for file in walkDirRec "./":
    if file.match re".*\.mp4":
      let revid = multiReplace(file, slugify)
      let remp3 = multiReplace(revid,[(".mp4", ".mp3")])
      vids.add(revid)
      mp3s.add(remp3)
      moveFile(file, revid)
      echo "Slugify Finish!"
  
  for _, names in zip(vids, mp3s):
    let temp = convertMp3(names.a, names.b)
    let output2 = execProcess(temp)
    echo output2

  echo "All Done!"


if isMainModule:
  main()
