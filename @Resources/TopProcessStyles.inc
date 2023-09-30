
[LabelStyle]
StringAlign=Left
AntiAlias=1
FontFace=#Font1#
Clipstring=1
FontSize=(#Scale#*13)
FontColor=#FontColor#
W=(#MaxWidth# * #Scale# * 0.8)
X=(#Scale#*5)
Y=(#Scale#*(#CURRENTSECTION# = 0 ? 12 : 5))R

[ValueStyle]
X=(#MaxWidth# * #Scale#)
FontSize=(#Scale#*13)
FontColor=#FontColor#
StringStyle=normal
FontFace=#Font1#
StringAlign=right
AntiAlias=1
DynamicVariables=1

[RamStyle]
NumOfDecimals=#RamDecimals#
AutoScale=1
Text=%1B

[TitleStyle]
X=(#Scale#*5)
Y=(#Scale#*5)
FontSize=(#Scale#*13)
FontColor=#FontColor#
FontWeight=#FontWeight#
StringStyle=normal
FontFace=#Font1#
StringAlign=left
AntiAlias=1
