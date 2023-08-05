[MeterLineDownload]
Meter=Line
MeasureName=MeasureNetworkIn
LineColor=#FontColor2#
MeterStyle=LS
Y=R

[MeterLineDownload2]
Meter=Line
MeasureName=MeasureNetworkIn
MeterStyle=LS
LineColor=#FontColor#,50
Flip=1
X=r
Y=R

[MeterDownload]
Meter=String
MeterStyle=SS
Text=Download:
Y=R

[MeterDownloadSpeed]
Meter=String
MeterStyle=SS|SSS
MeasureName=MeasureNetworkIn
X=[MeterLineDownload:W]
