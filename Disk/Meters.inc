[MeterUsage]
Meter=Bar
MeasureName=MeasureUsedDisk
BarOrientation=Horizontal
W=(#MaxWidth# * #Scale#)
H=(3 * #Scale#)
BarColor=#FontColor2#
SolidColor=#FontColor#,55
DynamicVariables=1

[SS]
FontSize=(13 * #Scale#)
FontFace=#Font1#
FontColor=#FontColor#
AntiAlias=1
Y=(15 * #Scale#)
DynamicVariables=1
FontWeight=#FontWeight#
StringCase=#StringCase#

[MeterValue]
Meter=String
MeasureName=MeasureUsedDisk
MeasureName2=MeasureTotalDisk
MeterStyle=SS
Text="%1B / %2B"
NumOfDecimals=1
AutoScale=#AutoScaleString#
StringAlign=Right
X=R

[MeterDisk]
Meter=String
MeterStyle=SS
Text=#Drive#:
