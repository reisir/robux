![NVIDIA_Share_tWNAYDvIcT](https://user-images.githubusercontent.com/93496808/197343984-d9e8deb2-d3c9-4d4b-9ee9-f39243126ab5.png)

# Robux

Robik but it work

# Features

- Uses AudioAnalyzer instead of AudioLevel for a smoother visualizer
- Uses WebNowPlaying for browser and Spotify song info
- The weather works
- Right click to center any skin

You might also want to check out [Mondtholomew](https://github.com/reisir/mondtholomew), it's "Mond but it work"!

# Usage

Download and install the newest .rmskin package from [releases](https://github.com/reisir/robux/releases)

Can also be installed using [Meters on Demand](https://github.com/meters-on-demand/cli)

```sh
mond install reisir/robux
```

Robux uses [WebNowPlaying](https://wnp.keifufu.dev/) by default. This lets the player skin read information from your browser with a [browser extension](https://wnp.keifufu.dev/extension/getting-started).

Right click any of the skins to center them or to open the settings file. When you edit the settings remember to save the file and then `right click > refresh robux` to see changes.

# The "MeasureNetworkInDelay" incident.

Found in the original code. If anyone can tell me why this exists in the original skin it would be much appreaciated.

```ini
; Download.ini
[MeasureNetworkIn]
Measure=NetIn
Interface=Best
MinValue=0
MaxValue=(#MaxDownloadMbits# * 1048576)

[MeasureNetworkInText]
Measure=NetIn
AverageSize=3
Substitute="0":"O"

[MeasureNetworkInDelay]
Measure=Calc
Formula=MeasureNetworkInText
```

`MeasureNetworkInDelay` was only used for the string meter, not for the graph. I have no idea what substituting the zeros from NetIn and then running that through a calc measure is supposed to do.

# Credits

- Original [Robik](https://www.deviantart.com/apexxx-sensei/art/Robik-771914763) by [ApexXx-SenSei](https://www.deviantart.com/apexxx-sensei)
- [Weather.com parser](https://forum.rainmeter.net/viewtopic.php?f=118&t=34628#p171501) by [@jsmorley](https://github.com/jsmorley)
- Montserrat Monospace font edit by silver on the Rainmeter discord
