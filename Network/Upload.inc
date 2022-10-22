[MeterLineUpload]
Meter=Line
MeasureName=MeasureNetworkOut
LineColor=#FontColor2#
MeterStyle=LS
Y=R

[MeterLineUpload2]
Meter=Line
MeasureName=MeasureNetworkOut
MeterStyle=LS
LineColor=#FontColor#,50
Flip=1
X=r
Y=R

[MeterUpload]
Meter=String
MeterStyle=SS
Text=Upload:
Y=R

[MeterUploadSpeed]
Meter=String
MeterStyle=SS|SSS
MeasureName=MeasureNetworkOut
X=[MeterLineUpload:W]
