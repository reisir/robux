[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
Substitute="":"#NotAvailable#"

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
RegExpSubstitute=1
Substitute=[#Substitute[#TitleExtraction]]
DynamicVariables=1
