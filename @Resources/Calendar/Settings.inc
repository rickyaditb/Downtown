; Please visit http://smurfier.github.io/LuaCalendar for detailed descriptions of the features listed below.
; Settings file v6.0

[Variables]
;Name of the Style Sheet
Style=Default

;Custom text for Weekday labels. Uses the following format: Sun|Mon|Tue|Wed|Thu|Fri|Sat
DayLabels=日|月|火|水|木|金|土

;Set to 1 to hide week 6 if not included in the current month
HideLastWeek=0

;Holidays File names
;Note: Multiple event files can be used by setting 'path to the calendars' as the first parameter, then separating each event file using the pipe delimiter (|).
EventFile=#@#Calendar\Calendars\Holidays.xml

;Custom Text formatting for Month Labels. See Readme for details.
LabelText={$MName} {$Year}

;Set to 1 to add a leading zero to any number below 10.
LeadingZeroes=0

;Custom text for Month labels. Uses the following format: Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
MonthLabels=January|February|March|April|May|June|July|August|September|October|November|December

;Set to 1 to have the week start on Monday
StartOnMonday=0

;The format for the list of upcoming events. {$day} and {$desc} are valid variables.
NextFormat=

;Show the Moon Phases as events
ShowMoonPhases=0

;Color to use for the Moon Phases Events
MoonColor=40,220,40

;Set to 0 to hide all calendar events including the Moon Phases
ShowEvents=0

;Set to 1 to disable scroll actions for changing the month
DisableScroll=0

