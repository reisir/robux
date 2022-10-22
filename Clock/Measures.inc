[MeasureTime]
Measure=Time
Format=%#Format#.%M
UpdateDivider=1
OnChangeAction=[!UpdateMeter MeterTime][!Redraw]

[MeasureDay]
Measure=Time
Format=%A
UpdateDivider=1
OnChangeAction=[!UpdateMeasure MeasureDate][!UpdateMeter MeterDate][!UpdateMeter MeterDay][!Redraw]

[MeasureDate]
Measure=Time
Format=%d %B %Y
