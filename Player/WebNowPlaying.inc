[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=ARTIST
Substitute="":"N/A"

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=TITLE
RegExpSubstitute=#RemoveArtistFromTitle#
Substitute=#Substitute#
DynamicVariables=1
