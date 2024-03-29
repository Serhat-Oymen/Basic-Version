[Rainmeter]

[Variables]
DropdownPadding=#NoIconPadding#

BGCorner=0

;---------------------------

[MeasureRegistry]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop\WindowMetrics
RegValue=AppliedDPI
UpdateDivider=-1

[InputTextFontSize]
Measure=Calc
Formula=(((10*#DroptopSize#)-((((10*#DroptopSize#)*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-(10*#DroptopSize#))/2))-(((10*#DroptopSize#)-((((10*#DroptopSize#)*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-(10*#DroptopSize#))/2))%1))
DynamicVariables=1

;---------------------------

[1]
StringAlign=LeftCenter
FontSize=(10*#DroptopSize#)
FontFace=Segoe UI
SolidColor=255,255,255
FontColor=0,0,0,185
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "0,0,0,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "0,0,0,185"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure #CURRENTSECTION#InputField "ExecuteBatch 1"]
X=(1+#StrokeWidth2#)
W=(#DropdownMenuWidth#-(#StrokeWidth2#*2)-#NoIconPadding#+1)
Padding=#NoIconPadding#,0,0,0

[2]
Text=""
MouseOverAction=[]
MouseLeaveAction=[]

[3]
FontColor=#SuperColor#,128
MouseOverAction=[]
MouseLeaveAction=[]
Y=(#DropdownMenuHeight#*(#NumberOfItems#-1)+((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#))
Hidden=0

[4]
Hidden=1

[1InputField]
Measure=Plugin
Plugin=InputText.dll
FontFace=Segoe UI
StringAlign=Left
FontSize=[InputTextFontSize]
AntiAlias=1
W=([1:W]-(24*#DroptopSize#))
H=(#DropdownMenuHeight#-(6*#DroptopSize#))
X=([1:X]+(#NoIconPadding#-#HighlightXOffset#))
Y=([1:Y]+(3*#DroptopSize#))
FocusDismiss=0
Command1=#OptionChanged#[!WriteKeyValue Variables DownloadsLoc "$UserInput$" "#@#GlobalVar\UserSettings.inc"][!Refresh]
DefaultValue="#DownloadsLoc#"
DynamicVariables=1