[MeterSign]
Meter=String
FontColor=#FontColor2#
FontSize=(50 * #Scale#)
AntiAlias=1
Text="♪"
DynamicVariables=1

; StringStyle
[SS]
StringAlign=Left
StringCase=Upper
FontFace=#Font1#
FontColor=#FontColor#
FontSize=(15 * #Scale#)
DynamicVariables=1
AntiAlias=1
ClipStringW=#MaximumWidth#
ClipString=2

[MeterArtist]
Meter=String
MeterStyle=SS
MeasureName=MeasureArtist
X=(12 * #Scale#)R
Y=(26 * #Scale#)

[MeterTitle]
Meter=String
MeasureName=MeasureTitle
MeterStyle=SS
X=r
Y=R

