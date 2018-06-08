# This program uses youtube-dl, ffmpeg.

# Import
import os
from subprocess import call
from time import sleep
import base64

def slugify(files):
    import string
    valid_chars = "-_.()%s%s" % (string.ascii_letters, string.digits)
    files = ''.join(c for c in files if c in valid_chars)
    return files

def Replace(files):
    files=files.replace('(','\(')
    files=files.replace(')','\)')
    return files

# 
num = raw_input('Input the number of songs: ')
num = int(num)

for i in range(0, num):
    link = raw_input('Input youtube link ')
    call('youtube-dl --embed-thumbnail --format mp4 '+link, shell=True)
print 'Wait downloading..'
sleep(4)

P = os.listdir(os.getcwd())

for files in P:
    if files.endswith('.mp4'):
        os.rename(files, slugify(files))
    elif files.endswith('.jpg'):
        os.rename(files, slugify(files))

print "Wait Slugifying.."
sleep(1)

P = os.listdir(os.getcwd())

for files in P:
    if files.endswith('.mp4'):
        f=Replace(files)
        call("ffmpeg -i "+f+" -b:a 320K -vn "+os.path.splitext(f)[0]+'.mp3', shell=True)
