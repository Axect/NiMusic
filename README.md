# NiMusic

Nim music download program for Youtube

## Prerequisite

* youtube-dl
* ffmpeg

You can download prerequistes easily.

### Ubuntu

```sh
sudo apt-get install ffmpeg

# Root Privilege
sudo pip install youtube-dl

# Non Root User (export PATH=$PATH:$HOME/.local/bin) in your .bashrc
pip install youtube-dl --user
```

### Fedora, CentOS, RHEL

* Visit next site : [Rpm Fusion Free](https://rpmfusion.org/)
* Download `rpmfusion-free-release` and install it.
* Install ffmpeg
```sh
# Fedora
sudo dnf install ffmpeg ffmpeg-devel

# CentOS
sudo yum install ffmpeg ffmpeg-devel
```

* Install youtube-dl

```sh
# Root Privilege
sudo pip install youtube-dl

# Non Root user -- Be sure to (export PATH=$PATH:$HOME/.local/bin) in your .bashrc (or .zshrc)
pip install youtube-dl --user
```

## Usage

* Warning: Don't copy your playlist link! It causes an error!
  * Thus, re-search music and copy that link

Clone this repo.

```sh
git clone https://github.com/Axect/NiMusic

cd NiMusic
```

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
