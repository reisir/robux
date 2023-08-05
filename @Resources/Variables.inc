[Variables]
; Maximum width
MaxWidth=315

; AutoScale the graphs? Acceptable values: 0 | 1
AutoScale=1
; AutoScale the strings? Accetable values: 0 | 1 | 1k
AutoScaleString=1k

; Clock 
FontColor=255,255,255
FontColor2=241,135,52

; Clock date & most other skins
Font1=Product Sans
; Clock time
Font2=Montserrat
; Clock day
Font3=Moving Skate

; String settings
StringCase=Upper
FontWeight=700


;  ██████ ██       ██████   ██████ ██   ██ 
; ██      ██      ██    ██ ██      ██  ██  
; ██      ██      ██    ██ ██      █████   
; ██      ██      ██    ██ ██      ██  ██  
;  ██████ ███████  ██████   ██████ ██   ██

; Change the language used by the clock to display the week day and month text
; Use "en" for English and "Local" for your system's locale
; Read more: https://docs.rainmeter.net/manual/measures/time/#FormatLocale
; All valid language codes https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c
LanguageCode=Local
; Change the Clock formats
; Use "%H : %M" for 24h time and "%I : %M %p" for 12h time
; Read more: https://docs.rainmeter.net/manual/measures/time/#FormatCodes
MeasureTimeFormat=%H:%M
; Day format. Refer to the previous link.
MeasureDayFormat=%A
; Date format. Refer to the previous link.
MeasureDateFormat=%d %B %Y

; ███    ██ ███████ ████████ ██     ██  ██████  ██████  ██   ██ 
; ████   ██ ██         ██    ██     ██ ██    ██ ██   ██ ██  ██  
; ██ ██  ██ █████      ██    ██  █  ██ ██    ██ ██████  █████   
; ██  ██ ██ ██         ██    ██ ███ ██ ██    ██ ██   ██ ██  ██  
; ██   ████ ███████    ██     ███ ███   ██████  ██   ██ ██   ██ 
                                                              
; Network speeds in megabits https://www.speedtest.net/
; Acceptable values https://en.wikipedia.org/wiki/Natural_number
DownloadSpeedMegabit=800
UploadSpeedMegabit=100

; ██████  ██       █████  ██    ██ ███████ ██████  
; ██   ██ ██      ██   ██  ██  ██  ██      ██   ██ 
; ██████  ██      ███████   ████   █████   ██████  
; ██      ██      ██   ██    ██    ██      ██   ██ 
; ██      ███████ ██   ██    ██    ███████ ██   ██

; Where to get media information. WebNowPlaying tries to fetch information from the browser addon. NowPlaying gets data from a local media player.
; WebNowPlaying | NowPlaying
PlayerPlugin=WebNowPlaying

; Local player to get media information from. Only works with NowPlaying.
; https://docs.rainmeter.net/manual/measures/nowplaying/#playerlist
; AIMP | CAD | iTunes | Winamp | WMP 
PlayerName=CAD

; What to display when information is not available
NotAvailable="N/A"

; Toggles title extraction. Only works with WebNowPlaying.
; Useful when the title of the media has duplicated or unnecessary information.
; For example, the song "Fake Friends" posted on the YouTube channel "MANON" has the title "MANON / Fake Friends (Music Video)"
; Title extraction removes the duplicated artist name and "(Music Video)" from the information displayed
; TitleExtraction=0 -> MANON - MANON / Fake Friends (Music Video)
; TitleExtraction=1 -> MANON - Fake Friends
TitleExtraction=1

; ██    ██ ██ ███████ ██    ██  █████  ██      ██ ███████ ███████ ██████  
; ██    ██ ██ ██      ██    ██ ██   ██ ██      ██    ███  ██      ██   ██ 
; ██    ██ ██ ███████ ██    ██ ███████ ██      ██   ███   █████   ██████  
;  ██  ██  ██      ██ ██    ██ ██   ██ ██      ██  ███    ██      ██   ██ 
;   ████   ██ ███████  ██████  ██   ██ ███████ ██ ███████ ███████ ██   ██

; After changing this value, refresh the visualizer skin twice
Bands=120

; AudioAnalyzer settings
MaxSensitivity=35
MinSensitivity=0
FFTAttack=0
FFTDecay=0
FreqMin=20
FreqMax=16000
PeakFFTAttack=0
PeakFFTDecay=100
PeakUpdateDivider=2
BlurRadius=1

; ██     ██ ███████  █████  ████████ ██   ██ ███████ ██████  
; ██     ██ ██      ██   ██    ██    ██   ██ ██      ██   ██ 
; ██  █  ██ █████   ███████    ██    ███████ █████   ██████  
; ██ ███ ██ ██      ██   ██    ██    ██   ██ ██      ██   ██ 
;  ███ ███  ███████ ██   ██    ██    ██   ██ ███████ ██   ██

; Weather color overrides
WeatherMainColor=255,255,255
WeatherAccentColor=241,135,52

; Weather icon colors
WeatherIconColor=#WeatherMainColor#
WeatherIconAccent=#WeatherAccentColor#

; Unit system to use when reporting temperature
; e (Imperial) | m (Metric) | h (Hybrid)
WeatherUnits=m
; Language to use when reporting conditions like cloudy, rain, snow etc.
WeatherLanguageCode=en-US

; ██ ███    ██ ████████ ███████ ██████  ███    ██  █████  ██      
; ██ ████   ██    ██    ██      ██   ██ ████   ██ ██   ██ ██      
; ██ ██ ██  ██    ██    █████   ██████  ██ ██  ██ ███████ ██      
; ██ ██  ██ ██    ██    ██      ██   ██ ██  ██ ██ ██   ██ ██      
; ██ ██   ████    ██    ███████ ██   ██ ██   ████ ██   ██ ███████ 

; Edit #@#Language.inc to change most text in the skin

; Acceptable values: https://en.wikipedia.org/wiki/Real_number
ScrollMouseIncrement=0.1
