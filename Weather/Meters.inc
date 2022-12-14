[MeterCurrentIcon]
Meter=Image
MeasureName=@CurrentIcon
Path=#@#Weather\#IconStyle#
X=(((#MaxWidth# / 2) * #Scale#) - (45 * #Scale#))
W=(90 * #Scale#)
H=(90 * #Scale#)
AntiAlias=1
GrayScale=1
ImageTint=#FontColor2#
DynamicVariables=1

[MeterCurrentCond]
Meter=String
MeasureName=@CurrentConditions
MeasureName2=@CurrentTemperature
MeasureName3=@UnitsTemperature
StringAlign=CenterCenter
StringCase=Upper
FontColor=#FontColor#
FontFace=#Font1#
FontSize=(13 * #Scale#)
X=((#MaxWidth# / 2) * #Scale#)
Y=R
W=(#MaxWidth# * #Scale#)
Text="%1 %2°%3"
ClipString=1
AntiAlias=1
DynamicVariables=1
