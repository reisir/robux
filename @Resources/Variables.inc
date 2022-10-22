[Variables]
ScrollMouseIncrement=0.1

; Maximum width
MaxWidth=315

; Clock 
FontColor=255,255,255
FontColor2=241,135,52

; Clock date
Font1=Product Sans
; Clock time
Font2=Montserrat
; Clock day
Font3=Moving Skate

; Title regex hidden here to not scare people when they edit Player.ini
; SeparatorPattern=\s?[[:punct:]|×|•|\–|\|]?\s?
SeparatorPattern=\s?\S?\s?
Artist=[MeasureArtist:EscapeRegExp]
OP=\(\[\{
CP=\)\]\}
Substitute="(?i)^#Artist##SeparatorPattern#|#SeparatorPattern##Artist#$":"","(?i)[#OP#][^#OP#]*?(?:video|audio)[^#CP#]*?[#CP#]\s?":"","(?i)^[\,|x]\s|^t. |^eat. |^eaturing ":"ft. "
