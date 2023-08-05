[MeasureTime]
Measure=Time
Format=#MeasureTimeFormat#
FormatLocale=#LanguageCode#
UpdateDivider=1
OnChangeAction=[!UpdateMeter MeterTime][!Redraw]

[MeasureDay]
Measure=Time
UpdateDivider=1
Format=#MeasureDayFormat#
FormatLocale=#LanguageCode#
OnChangeAction=[!UpdateMeasure MeasureDate][!UpdateMeter MeterDate][!UpdateMeter MeterDay][!Redraw]

[MeasureDate]
Measure=Time
Format=#MeasureDateFormat#
FormatLocale=#LanguageCode#
