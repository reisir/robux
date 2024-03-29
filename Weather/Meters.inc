[MeterIcon]
Meter=Image
MeasureName=@CurrentIcon
DynamicVariables=1
ImageName=Icons\%1.png
ImageTint=#WeatherIconColor#
W=(80 * #Scale#)

[MeterAccentIcon]
Meter=Image
MeasureName=MeasureAccentIcon
DynamicVariables=1
ImageName=AccentIcons\%1.png
W=(80 * #Scale#)
ImageTint=#WeatherIconAccent#

[WeatherBase]
FontFace=#Font1#
FontColor=#WeatherMainColor#
DynamicVariables=1
FontSize=(12 * #Scale#)
X=r
Y=R
StringAlign=Left
StringCase=#StringCase#
AntiAlias=1
InlineSetting=Color | #WeatherAccentColor#,255
InlinePattern=(-?\d*)
FontWeight=#FontWeight#

[MeterLocation]
Meter=String
MeasureName=@LocationName
MeterStyle=WeatherBase
FontSize=(18 * #Scale#)
X=10R
Y=r

[MeterCurrentConditionsAndTemperature]
Meter=String
MeasureName=@CurrentConditions
MeasureName2=@CurrentTemperature
MeasureName3=@UnitsTemperature
MeterStyle=WeatherBase
Text="%1 %2 #Degrees#%3"
ClipString=2
ClipStringW=(192 * #Scale#)
