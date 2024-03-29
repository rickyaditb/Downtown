; ===== Style: DefaultEvents =====

[Rainmeter]
AccurateText=1
BackgroundMode=2
SolidColor=0,0,0,1
MouseOverAction=[!ShowMeterGroup Controls][!Redraw]
MouseLeaveAction=[!HideMeterGroup Controls][!Redraw]

ContextTitle9="Edit Your Events"
ContextAction9=["#ConfigEditor#" "#@#Calendar\Calendars\Personal.xml"]

;===== Meter Styles=====
;All of these meter styles are required.

;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=Segoe UI
FontColor=#SolidWhite#
SolidColor=255,255,255,25
FontSize=9
stringAlign=CenterCenter
AntiAlias=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)

[LblCurrSty]
StringStyle=Bold

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=#SolidWhite#
FontFace=Segoe UI
FontSize=9
stringAlign=center
AntiAlias=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
StringStyle=Bold
FontColor=#SolidWhite#

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=128,192,255,160

[NextMonth]
FontColor=128,192,255,160

[HolidayStyle]
FontColor=#YouTubeRed#

[WeekendStyle]

;========== METERS ==========
;These are not required.
[mLabel]
Meter=String
Text=#MonthLabel# <Events>
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+#Bumper.x#)
Y=(#Bumper.top#-3)
H=#C.h#
FontColor=#SolidWhite#
FontFace=Segoe UI
FontSize=10
stringAlign=Center
AntiAlias=1
DynamicVariables=1

;Control Bar
[ControlForward]
Meter=String
MeterStyle=TextStyle
FontFace=Webdings
StringAlign=Left
Text="4"
Y=#Bumper.top#
X=((#C.w#*6+#Space.x#*6)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=#Bumper.x#
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=R
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]

;Date Indicator
[TodayHL]
Meter=image
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#+3)
Y=(#Bumper.top#+(#C.h#+#Space.y#)*(#ThisWeek#+1)+#C.h#-1)
H=2
W=(#C.w#-6)
SolidColor=#Clr.Hrl#
Hidden=#NotCurrentMonth#
DynamicVariables=1

[EventsList]
Meter=String
MeterStyle=TextStyle
Text=#NextEvent#
X=#Bumper.x#
Y=((#C.h#+#Space.y#)*(9-#LastWkHidden#))
H=(#Events.h#-#Space.y#*(1-#LastWkHidden#))
W=(#C.w#*7+#Space.x#*6)
StringAlign=Left
DynamicVariables=1
ClipString=1

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+#Events.h#+1)