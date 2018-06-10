# NiMusic

Nim music download program for Youtube

## Prerequisite

* youtube-dl
* ffmpeg

You can download prerequistes easily.

### Ubuntu

```sh
pip install youtube-dl --user
sudo apt-get install ffmpeg
```

### Fedora, CentOS, RHEL

* Visit next site : [Rpm Fusion Free](https://rpmfusion.org/)
* Download `rpmfusion-free-release` and install it.
* Install youtube-dl

```sh
pip install youtube-dl --user
```

## Usage

First, make `link.csv` file in this directory or just use sample link.csv.

```sh
touch link.csv
```

Second, fill `link.csv` by youtube link (line by line). 

Third, run binary file
(This binary is compiled from fedora linux. If you use another OS, then plz recompile this)

```sh
./youtube
```

That's it.

## Recompile

First, download nim

```sh
# Ubuntu
sudo apt-get install nim

# Fedora
sudo dnf install nim

# Arch
sudo pacman -S nim

# macOS
brew install nim

# Others (choosenim)
curl https://nim-lang.org/choosenim/init.sh -sSf | sh
```

Second, compile my `youtube.nim`

```nim
nim c -d:release youtube.nim
```

Then enjoy!
