
; LineStyle
[LS]
MeasureName=MeasureCPU
W=(#MaxWidth# * #Scale#)
H=(30 * #Scale#)
DynamicVariables=1
AutoScale=1
AntiAlias=1

[MeterLine]
Meter=Line
MeterStyle=LS
LineColor=#FontColor2#

[MeterLine2]
Meter=Line
MeterStyle=LS
LineColor=#FontColor#,50
Flip=1
X=r
Y=R

; StringStyle
[SS]
FontSize=(13 * #Scale#)
FontFace=#Font1#
FontColor=#FontColor#
AntiAlias=1

[MeterAverageCPU]
Meter=String
MeterStyle=SS
Text=CPU: 
Y=R

[MeterCPUPercentage]
Meter=String
MeasureName=CPUavg
MeterStyle=SS
StringAlign=Right
Text=%1%
X=[MeterLine:W]
DynamicVariables=1
AntiAlias=1
Percentual=1
AutoScale=1
Y=r
