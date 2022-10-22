[MeasurePhysMemTotal]
Measure=PhysicalMemory
Total=1

[MeasurePhysMemUsed]
Measure=PhysicalMemory
UpdateDivider=7
OnChangeAction=[!UpdateMeter *][!Redraw]
