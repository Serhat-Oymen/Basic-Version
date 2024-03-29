[Variables]

; --------------------------
; Theme Variables
; --------------------------

IconPack=Default

AltFont1=0
AltFont2=0
AltFont3=0
AltFont4=0
AltFont5=0
AltFont6=0
AltFont7=0
AltFont8=0
AltFont9=0
AltFont10=0
AltFont11=0
AltFont12=0
AltFont13=0
AltFont14=0
AltFont15=0
AltFont16=0
AltFont17=0
AltFont18=0

;-------------------------------------------------------------------

TopBarBlur=0
TopBarFontSize=((14*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=1
TopBarObjectXOffset=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
TitlePadding="((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((30*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(3*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
SysTextYPadding=((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(0*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=0
BorderTopH=0
BorderBottomH=0
TitleCase=None
HideOptionalShapes=1
HighlightOffsetY=((14*#DroptopSize#)-((14*#DroptopSize#)%1))
HighlightOffsetH=(14*#DroptopSize#)
TopBarSkewON=0
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((-10*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(2*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(3*#DroptopSize#)
AutohideFadeRate=1.6

;----------------------------------------------------------------------------------

DropdownBlur=0
DropdownBlurAction=HideBlur
DropdownMenuWidth=((300*#DroptopSize#)-((300*#DroptopSize#)%1))
DropdownMenuHeight=((25*#DroptopSize#)-((25*#DroptopSize#)%1))
DropdownMenuFontSize=((13*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(4*#DroptopSize#)
DropdownIconYoffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
DropdownItemYOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownPadding=(26*#DroptopSize#)
DropdownPadding2=(20*#DroptopSize#)
DropdownPaddingY=((0+[#FontYposOffset[#ThemeNum]])*#DroptopSize#)
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(185*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(3*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((20*#DroptopSize#)-((20*#DroptopSize#)%1))
ArrowXOffset=(0*#DroptopSize#)
ArrowXOffsetTray=(-2*#DroptopSize#)
ArrowXOffsetRTL=(0*#DroptopSize#)
ArrowStyle=1
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=0
SubMenuXOffset=(5*#DroptopSize#)
DropdownCutout=(1*#DroptopSize#)
HighlightXOffset=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=1
ChamLum2=1
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=100,116,144
ChamBG2=140,153,174
ChamBG3=151,175,196
ChamFG1=255,255,255
ChamFG2=255,255,255

BGColor1=56,60,74
BGColor2=56,60,74
BGColor3=56,60,74
SuperColor=255,255,255
SuperColor2=255,255,255
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
FolderBG1=56,60,74
FolderHL=82,148,226
TopBarHL=82,148,226
TopBarHomeIconColor=255,255,255
AssistantIconTint=#TopBarFontColor1#
AssistantIconTint2=#TopBarFontColor2#
TopButtonGreyscale=0
BorderTopColor=25,25,25,(55*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,(26*(#BGOpacity1#/255))
LuminosityOffset=255,255,255,0
SliderTextColor=#SuperColor2#
TopBarSolidColor=0
DropdownSliderColor=#FolderHL#
IconTint=255,255,255
Greyscale=0
PresetColor=1
LockPresetColor=1
;---
; ColorMode/Charging/BatteryLow
BatteryFillColor000=#TopBarFontColor1#
BatteryFillColor001=#TopBarFontColor1#
BatteryFillColor010=#TopBarFontColor1#
BatteryFillColor011=#TopBarFontColor1#

BatteryFillColor100=#TopBarFontColor1#
BatteryFillColor101=233,86,70
BatteryFillColor110=47,207,91
BatteryFillColor111=233,86,70

;---

BatteryFillColor000B=#TopBarFontColor2#
BatteryFillColor001B=#TopBarFontColor2#
BatteryFillColor010B=#TopBarFontColor2#
BatteryFillColor011B=#TopBarFontColor2#

BatteryFillColor100B=#TopBarFontColor2#
BatteryFillColor101B=233,86,70
BatteryFillColor110B=47,207,91
BatteryFillColor111B=233,86,70

;-------------------------
; Opacities

BGOpacity1=255
BGOpacity2=76.5
FolderOpacity1=255
FolderHLO=255
TopBarHLO=255
FolderHLO2Offset=0
TopBarHLO2Offset=0
FolderHLO2=85
TopBarHLO2=85
HLTextOpacity=255

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=0

TopBarBlurType=[#BlurType[#BlurTypeNum]]

TopBarBlurAction0=!HideBlur
TopBarBlurAction1=!ShowBlur
TopBarBlurActionNum=0

BatteryOutlineOpacity=#TitleOpacity#
BatteryFillOpacity=(255+(100*#BatteryColorMode#))

;---

TopBarShadow=0
DropdownMenuShadow=0

;-------------------------
; Font

BorderOpacity=25
HoverOpacity=25
FontWeight=400
DegreeSymbol=°
PercentSymbol=%
PowerSymbol=↯
MusicSymbol=♪
MailSymbol=✉
DismissFontSize=#TopBarFontSize#
DismissW=(170*#DroptopSize#)
SliderTextEffect=None
TopBarCharacterSpacing=0 | 0
DropdownCharacterSpacing=0 | 0
TopBarInlineShadow=

;-------------------------
; Shapes & backgrounds

SelectedSizeOffset=(0*#DroptopSize#)
StrokeWidth=(0*#DroptopSize#)
StrokeWidth2=(1*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TimeStrokeWidth=(3*#DroptopSize#)
StrokeOpacity1=0
StrokeOpacity2=75
TopBarStrokeOpacity=0
StrokeColor1=0,0,0,#StrokeOpacity1#
StrokeColor2=0,0,0,#StrokeOpacity2#
TopBarStrokeColor=#SuperColor#
Corner0=2
Corner1=6
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=(([#Corner[#RoundedCorners]]*#DroptopSize#)/2)
TopBarCorner=(#BGCorner#+(3*#DroptopSize#))
TopGradientCorner=#TopBarCorner#
HLContainerCorner=(#BGCorner#-(2*#DroptopSize#))
RoundedCorners=1

DividerX=(#StrokeWidth2#+1)
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(2*#DroptopSize#)

DividerShape=Rectangle #DividerX#,0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #SuperColor#,40 | StrokeWidth 0

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=56,60,74
ChamBGColor2=56,60,74
ChamBGColor3=56,60,74
ChamFolderBG1=56,60,74
ChamFolderHL=82,148,226
ChamTopBarHL=82,148,226
ChamSuperColor=255,255,255
ChamSuperColor2=255,255,255
ChamTopBarFontColor1=255,255,255
ChamTopBarFontColor2=255,255,255
ChamStrokeColor1=0,0,0,#StrokeOpacity1#
ChamStrokeColor2=255,255,255,#StrokeOpacity2#
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=255,255,255
ChamAssistantIconTint=#ChamTopBarFontColor1#
ChamAssistantIconTint2=#ChamTopBarFontColor2#
ChamBatteryFillColor=255,255,255
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5

BLANK=56,60,74

;-------------------------
