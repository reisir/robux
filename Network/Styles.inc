; LineStyle
[LS]
MeasureName=MeasureCPU
W=(#MaxWidth# * #Scale#)
H=(30 * #Scale#)
X=0
DynamicVariables=1
AntiAlias=1
AutoScale=#AutoScale#

; StringStyle
[SS]
AntiAlias=1
FontFace=#Font1#
FontColor=#FontColor#
FontSize=(13 * #Scale#)
StringCase=Upper

; SpeedStringStyle
[SSS]
NumOfDecimals=1
AutoScale=1
Text=%1bps
StringAlign=Right
DynamicVariables=1
Y=r