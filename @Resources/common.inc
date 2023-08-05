[Rainmeter]
Update=16
BackgroundMode=2
SolidColor=0,0,0,1
DynamicWindowSize=1
; Scaling
MouseScrollUpAction=[!SetVariable Scale "([#Scale] + #ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]"][!UpdateMeter *][!Redraw]
MouseScrollDownAction=[!SetVariable Scale "([#Scale] - #ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]"][!UpdateMeter *][!Redraw]
@IncludeContext=#@#context.inc
@IncludeLanguage=#@#language.inc
@IncludeVariables=#@#variables.inc
