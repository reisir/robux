; StringStyle
[SS]
AntiAlias=1
X=([MeterTime:W] / 2)
StringAlign=Center
DynamicVariables=1

; TimeStyle
[TS]
FontFace=#Font2#
FontColor=#FontColor#,100
FontSize=(127.5 * #Scale#)

[MeterTime]
Meter=String
MeasureName=MeasureTime
StringAlign=Left
X=0
MeterStyle=SS|TS

[MeterLine]
Meter=Shape
MeterStyle=SS
Y=(-15 * #Scale#)R
Shape=Rectangle (-55 * #Scale#),0,(110 * #Scale#),(4 * #Scale#),(2.5 * #Scale#) | Fill Color #FontColor# | StrokeWidth 0

[MeterDate]
Meter=String
MeasureName=MeasureDate
StringCase=Upper
FontColor=#FontColor#
FontFace=#Font1#
FontSize=(20 * #Scale#)
Y=(25 * #Scale#)R
MeterStyle=SS

[MeterDay]
Meter=String
MeasureName=MeasureDay
FontColor=#FontColor2#
FontSize=(90 * #Scale#)
FontFace=#Font3#
Y=(([MeterTime:H] / 2) - ([#CURRENTSECTION#:H] / 2))
MeterStyle=SS
