[MeasureTotalDisk]
Measure=FreeDiskSpace
Drive=#Drive#:
Total=1

[MeasureUsedDisk]
Measure=FreeDiskSpace
Drive=#Drive#:
InvertMeasure=1
UpdateDivider=10
OnChangeAction=[!Update][!Redraw]
