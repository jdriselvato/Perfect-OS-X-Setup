# Scripts
Below lists scripts that have been useful through my use of OSX.

#### FLAC to MP3
OSX and iTunes doesn't support FLAC so let's convert them to MP3.
First off install `ffmpeg`
````
brew install ffmpeg
````
Then run in selected folder with .flac files:
````
for f in *.flac; do ffmpeg -i "$f" -aq 1 "${f%flac}mp3"; done
````

#### FW Video downloader
````
ffmpeg -y -v warning -loglevel debug -i "any.m3u8" -vcodec copy -c copy -f mpegts out.ts

ffmpeg -i out.ts -acodec copy -vcodec copy out.mp4

````

#### ./bash_profile
````
# NDS/GBA Dev Paths
export DEVKITPRO=/Users/jdriselvato/devkitPro
export DEVKITARM=${DEVKITPRO}/devkitARM

export PATH=/usr/local/bin:$PATH

# Lines of code in XCode Project based on Swift files
alias xcode-count='find . -name "*.swift" -print0 | xargs -0 wc -l'
````

#### Raw to jpeg
````
for i in *.CR2; do sips -s format jpeg $i --out "${i%.*}.jpg"; done
````
