import os, osproc, strutils, strformat, sequtils

let callYoutube="youtube-dl --embed-thumbnail --format mp4"


#var nim = &"./Nim/bin/p00{num}"

#case num
#of 1..9: nim = &"./Nim/bin/p00{num}"
#of 10..100: nim = &"./Nim/bin/p0{num}"
#else: nim = &"./Nim/bin/p{num}"

proc main =
  let x = open("test.csv")
  var vid: seq[string] = @[]
  for i in x.lines:
    vid.add(multiReplace(i,[("(", "\\("),(")", "\\)"), (" ", "")]))
  echo vid


#proc main =
#  let output = case num
#  of 1..9: execProcess(&"hyperfine -w 3 --export-markdown Bench/euler00{num}.md " & rust & " " & nim & " " & haskell & python)
#  of 10..99: execProcess(&"hyperfine -w 3 --export-markdown Bench/euler0{num}.md " & rust & " " & nim & " " & haskell & python)
#  else: execProcess(&"hyperfine -w 3 --export-markdown Bench/euler{num}.md " & rust & " " & nim & " " & haskell & python)
#
#  echo output
#
if isMainModule:
  main()
