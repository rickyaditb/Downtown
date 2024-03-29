; ===== Style: CurrentWeek =====

[Rainmeter]
; BackgroundMode=2
; SolidColor=0,0,0,1
; MouseOverAction=[!ToggleMeterGroup Controls][!Redraw]
; MouseLeaveAction=[!ToggleMeterGroup Controls][!Redraw]

;===== Meter Styles=====
;All of these meter styles are required.
;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=Segoe UI
FontColor=#SolidOffWhite#
FontSize=9
stringAlign=center
AntiAlias=1
Group=Controls

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#*2)

[LblCurrSty]

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontColor=#SolidOffWhite#
FontFace=Segoe UI
FontSize=10
stringAlign=center
AntiAlias=1

[FirstDay]
Y=(#Bumper.top#*1.75+#C.h#+#Space.y#)
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
StringStyle=Bold
FontColor=#SolidWhite#
SolidColor=#WindowsColor#
Group=WindowsColorGroup
DynamicVariables=1

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=#TransparentWhite1#

[NextMonth]
FontColor=#TransparentWhite1#

[HolidayStyle]
FontColor=#YouTubeRed#

[WeekendStyle]

;========== METERS ==========
;These are not required.
[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+#Bumper.x#)
Y=#Bumper.top#
H=#C.h#
FontColor=#SolidWhite#
FontFace=Segoe UI
FontSize=10
stringAlign=Center
AntiAlias=1
DynamicVariables=1


;Day Label BG
[lBG]
Meter=image
H=#C.h#
W=(#C.W#*7+#Space.x#*6)
SolidColor=255,255,255,25
X=#Bumper.x#
Y=(#Bumper.top#+#C.h#*0.85)
;Y=#Bumper.top#

; [Ghost]
; Meter=Image
; SolidColor=0,0,0,1
; H=1
; W=1
; X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
; Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)

[Day1]
Meter=STRING

[Day2]
Meter=STRING

[Day3]
Meter=STRING

[Day4]
Meter=STRING

[Day5]
Meter=STRING

[Day6]
Meter=STRING

[Day7]
Meter=STRING
