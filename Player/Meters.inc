[MeterSign]
Meter=String
FontColor=#FontColor2#
FontSize=(50 * #Scale#)
AntiAlias=1
Text="♪"
DynamicVariables=1
FontWeight=#FontWeight#

; StringStyle
[SS]
StringAlign=Left
FontFace=#Font1#
FontColor=#FontColor#
FontSize=(15 * #Scale#)
DynamicVariables=1
AntiAlias=1
ClipStringW=#MaxWidth#
ClipString=2
FontWeight=#FontWeight#
StringCase=#StringCase#

[MeterArtist]
Meter=String
MeterStyle=SS
MeasureName=MeasureArtist
X=(12 * #Scale#)R
Y=(5 * #Scale#)

[MeterTitle]
Meter=String
MeasureName=MeasureTitle
MeterStyle=SS
X=r
Y=R
