[MeterBarRAM]
Meter=Bar
MeasureName=MeasurePhysMemUsed
BarOrientation=Horizontal
W=(#MaxWidth# * #Scale#)
H=(3 * #Scale#)
BarColor=#FontColor2#
SolidColor=#FontColor#,55
DynamicVariables=1
FontWeight=#FontWeight#
StringCase=#StringCase#

; StringStyle
[SS]
FontSize=(13 * #Scale#)
FontFace=#Font1#
FontColor=#FontColor#
AntiAlias=1
Y=(15 * #Scale#)
DynamicVariables=1

[MeterRam]
Meter=String
MeterStyle=SS
Text=RAM:

[MeterPercentage]
Meter=String
MeasureName=MeasurePhysMemUsed
MeterStyle=SS
StringAlign=Right
X=[MeterBarRAM:W]
Text=%1%
AntiAlias=1
Percentual=1
