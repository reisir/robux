# Robux

Robik but it work

# Features

- Uses AudioAnalyzer instead of AudioLevel for a smoother visualizer
- Uses WebNowPlaying for browser and Spotify sonf info
  - Can be reverted to NowPlaying for local music players
- The weather works

You might also want to check out [Mondtholomew](https://github.com/reisir/mondtholomew), it's "Mond but it work"!

# The "MeasureNetworkInDelay" incident.

Found in the original code. If anyone can tell me what the fuck ApexXx was smoking that'd be appreaciated.

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
