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

TopBarBlur=1
TopBarFontSize=((9.5*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=1
TopBarObjectXOffset=((8*#DroptopSize#)-((8*#DroptopSize#)%1))
TitlePadding="((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((-0.5*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((29*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(3*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
SysTextYPadding=((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(7*#DroptopSize#)
SysAppWPadding=(0*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=1
BorderTopH=0
BorderBottomH=0
TitleCase=None
HideOptionalShapes=1
HighlightOffsetY=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
HighlightOffsetH=(0*#DroptopSize#)
TopBarSkewON=0
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((-2*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(0*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(4*#DroptopSize#)
AutohideFadeRate=4

;-------------------------------------------------------------------

DropdownBlur=1
DropdownBlurAction=ShowBlur
DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownMenuHeight=((28*#DroptopSize#)-((28*#DroptopSize#)%1))
DropdownMenuFontSize=((9.5*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(8*#DroptopSize#)
DropdownIconYoffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
DropdownItemYOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownPadding=(38*#DroptopSize#)
DropdownPadding2=(20*#DroptopSize#)
DropdownPaddingY=((0+[#FontYposOffset[#ThemeNum]])*#DroptopSize#)
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(185*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(3*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((22*#DroptopSize#)-((22*#DroptopSize#)%1))
ArrowXOffset=(-1*#DroptopSize#)
ArrowXOffsetTray=(4*#DroptopSize#)
ArrowXOffsetRTL=(0*#DroptopSize#)
ArrowStyle=1
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=1
SubMenuXOffset=(6*#DroptopSize#)
DropdownCutout=(0*#DroptopSize#)
HighlightXOffset=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=31,31,31
ChamLumB=255,255,255

ChamBG1=8,15,26
ChamBG2=2,9,26
ChamBG3=3,8,21
ChamFG1=91,148,140
ChamFG2=116,140,155

BGColor1=31,31,31
BGColor2=31,31,31
BGColor3=31,31,31
SuperColor=255,255,255
SuperColor2=255,255,255
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
FolderBG1=31,31,31
FolderHL=133,133,133
TopBarHL=133,133,133
TopBarHomeIconColor=255,255,255
AssistantIconTint=255,255,255
AssistantIconTint2=255,255,255
TopButtonGreyscale=0
BorderTopColor=25,25,25,(92*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,(43*(#BGOpacity1#/255))
LuminosityOffset=255,255,255,0
SliderTextColor=255,255,255
TopBarSolidColor=0
DropdownSliderColor=#FolderHL#
IconTint=255,255,255
Greyscale=0
PresetColor=0
LockPresetColor=0
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

BatteryFillColor000B=255,255,255
BatteryFillColor001B=255,255,255
BatteryFillColor010B=255,255,255
BatteryFillColor011B=255,255,255

BatteryFillColor100B=255,255,255
BatteryFillColor101B=233,86,70
BatteryFillColor110B=47,207,91
BatteryFillColor111B=233,86,70

;-------------------------
; Opacities

BGOpacity1=205
BGOpacity2=75
FolderOpacity1=205
FolderHLO=85
TopBarHLO=85
FolderHLO2Offset=0
TopBarHLO2Offset=0
FolderHLO2=85
TopBarHLO2=85
HLTextOpacity=255

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=1

TopBarBlurType=[#BlurType[#BlurTypeNum]]

TopBarBlurAction0=!HideBlur
TopBarBlurAction1=!ShowBlur
TopBarBlurActionNum=1

BatteryOutlineOpacity=#TitleOpacity#
BatteryFillOpacity=(255+(100*#BatteryColorMode#))

;---

TopBarShadow=1
DropdownMenuShadow=1

;-------------------------
; Font

BorderOpacity=15
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
StrokeWidth2=(0*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TimeStrokeWidth=(3*#DroptopSize#)
StrokeOpacity1=255
StrokeOpacity2=30
TopBarStrokeOpacity=0
StrokeColor1=#FolderHL#,#StrokeOpacity1#
StrokeColor2=#SuperColor#,#StrokeOpacity2#
TopBarStrokeColor=#SuperColor#
Corner0=0
Corner1=6
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=#BGCorner#
TopBarCorner=(0*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
HLContainerCorner=0
RoundedCorners=0

DividerX=((8*#DroptopSize#)+1)
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle #DividerX#,0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #SuperColor#,40 | StrokeWidth 0

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=[ChamLumA]
ChamBGColor2=[ChamLumA]
ChamBGColor3=[ChamLumA]
ChamFolderBG1=[ChamLumA]
ChamFolderHL=133,133,133
ChamTopBarHL=133,133,133
ChamSuperColor=[ChamLumB]
ChamSuperColor2=[ChamLumB]
ChamTopBarFontColor1=[ChamLumB]
ChamTopBarFontColor2=[ChamLumB]
ChamStrokeColor1=[ChamFG2],#StrokeOpacity1#
ChamStrokeColor2=[ChamFG1],#StrokeOpacity2#
ChamTopBarStrokeColor=[ChamFG2]
ChamTopBarHomeIconColor=[ChamLumB]
ChamAssistantIconTint=#ChamTopBarFontColor1#
ChamAssistantIconTint2=#ChamTopBarFontColor2#
ChamBatteryFillColor=[ChamLumB]
ChamLightOffset=255
ChamDarkOffset=31
ChamLumThreshold=0.5

BLANK=46,31,31

;-------------------------
