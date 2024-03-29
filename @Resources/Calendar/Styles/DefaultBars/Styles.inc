; ===== Style: DefaultBars =====

Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1
MouseOverAction=[!ToggleMeterGroup Controls][!Redraw]
MouseLeaveAction=[!ToggleMeterGroup Controls][!Redraw]

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
Y=(#Bumper.top#+2)

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
Y=(#Bumper.top#+#C.h#+#Space.y#)
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
StringStyle=Bold
FontColor=#TwitterBlue#

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=#TransparentBlack1#

[NextMonth]
FontColor=#TransparentBlack1#

[HolidayStyle]
FontColor=#YouTubeRed#

[WeekendStyle]

;========== METERS ==========
;All of these meter styles are optional.
[mLabel]
Meter=String
Text=#MonthLabel#
X=#C.w#
W=(#C.w#*7+#Space.x#*6)
Y=(#Bumper.top#+#C.h#*4)
;Y=(#C.h#*5+#Space.y#*3+#Bumper.top#)
H=0
FontColor=#SolidWhite##
FontFace=Segoe UI
FontSize=11
stringAlign=Center
AntiAlias=1
Angle=-1.57
DynamicVariables=1

;Day Label BG
[lBG]
Meter=image
H=#C.h#
W=(#C.W#*7+#Space.x#*6)
SolidColor=#TransparentWhite3#
X=#Bumper.x#
Y=#Bumper.top#

;Control Bar
[ControlForward]
Meter=String
MeterStyle=TextStyle
FontFace=Webdings
StringAlign=Left
Text="4"
Y=(#Bumper.top#+4)
X=((#C.w#*6+#Space.x#*6.5)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=(#Bumper.x#+3)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=R
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]

;Date Indicator
[vLine1]
Meter=Image
SolidColor=#Clr.VLine#
W=#C.w#
H=((#C.h#+#Space.y#)*(#ThisWeek#-1)+#Space.y#)
Y=(#Bumper.top#+#C.h#)
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#)
DynamicVariables=1
Hidden=#NotCurrentMonth#

[hLine]
Meter=Image
SolidColor=#Clr.HLine#
H=#C.h#
W=((#C.w#+#Space.x#)*6+#C.w#)
X=#Bumper.x#
Y=R
DynamicVariables=1
Hidden=#NotCurrentMonth#

[vLine2]
Meter=Image
MeterStyle=vLine1
H=((#C.h#+#Space.y#)*(6-#LastWkHidden#-#ThisWeek#))
Y=R
