[Variables]

; --------------------------
; Theme Variables
; --------------------------

IconPack=Apple

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
TopBarFontSize=((11*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=1
TopBarObjectXOffset=((12*#DroptopSize#)-((12*#DroptopSize#)%1))
TitlePadding="((10*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((0.5*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((10*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((28*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(2*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
BatteryShadow=1
SysTextYPadding=((0.5*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(2*#DroptopSize#)
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
TopBarIconHOffset=((-1*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(0*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(2*#DroptopSize#)
AutohideFadeRate=4

;----------------------------------------------------------------------------------

DropdownBlur=1
DropdownBlurAction=ShowBlur
DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownMenuHeight=((28*#DroptopSize#)-((28*#DroptopSize#)%1))
DropdownMenuFontSize=((11*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(10*#DroptopSize#)
DropdownIconYoffset=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownItemYOffset=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownPadding=(36*#DroptopSize#)
DropdownPadding2=(30*#DroptopSize#)
DropdownPaddingY=((0+[#FontYposOffset[#ThemeNum]])*#DroptopSize#)
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(185*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(11*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((23*#DroptopSize#)-((23*#DroptopSize#)%1))
ArrowXOffset=(-1*#DroptopSize#)
ArrowXOffsetTray=(-2*#DroptopSize#)
ArrowXOffsetRTL=(1*#DroptopSize#)
ArrowStyle=1
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=0
SubMenuXOffset=(6*#DroptopSize#)
DropdownCutout=(0*#DroptopSize#)
HighlightXOffset=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownMenuLandingHeight=(17*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=0,0,0
ChamLumB=255,255,255

ChamBG1=8,15,26
ChamBG2=2,9,26
ChamBG3=3,8,21
ChamFG1=92,148,145
ChamFG2=116,140,155

BGColor1=8,15,26
BGColor2=2,9,26
BGColor3=3,8,21
SuperColor=255,255,255
SuperColor2=255,255,255
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
FolderBG1=0,0,0
FolderHL=0,125,255
TopBarHL=255,255,255
TopBarHomeIconColor=255,255,255
AssistantIconTint=255,255,255
AssistantIconTint2=255,255,255
TopButtonGreyscale=0
BorderTopColor=25,25,25,(92*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,(43*(#BGOpacity1#/255))
LuminosityOffset=255,255,255,0
SliderTextColor=#SuperColor2#
TopBarSolidColor=1
DropdownSliderColor=255,255,255
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

BGOpacity1=182
BGOpacity2=76.5
FolderOpacity1=115
FolderHLO=255
TopBarHLO=45
FolderHLO2Offset=0
TopBarHLO2Offset=0
FolderHLO2=85
TopBarHLO2=85
HLTextOpacity=255

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=1

TopBarBlurType=Blur

TopBarBlurAction0=!HideBlur
TopBarBlurAction1=!ShowBlur
TopBarBlurActionNum=1

BatteryOutlineOpacity=128
BatteryFillOpacity=(255+(100*#BatteryColorMode#))

;---

TopBarShadow=0
DropdownMenuShadow=0

;-------------------------
; Font

BorderOpacity=15
HoverOpacity=15
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
; TopBarInlineShadow=Shadow | 0 | (1.5*#DroptopSize#) | 3 | 0,0,0,105
TopBarInlineShadow=

;-------------------------
; Shapes & backgrounds

SelectedSizeOffset=(0*#DroptopSize#)
StrokeWidth=(0*#DroptopSize#)
StrokeWidth2=(1*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TimeStrokeWidth=(3*#DroptopSize#)
StrokeOpacity1=255
StrokeOpacity2=60
TopBarStrokeOpacity=0
StrokeColor1=#FolderHL#,#StrokeOpacity1#
StrokeColor2=0,0,0,#StrokeOpacity2#
TopBarStrokeColor=#SuperColor#
Corner0=0
Corner1=6
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=#BGCorner#
TopBarCorner=(0*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
HLContainerCorner=0
RoundedCorners=1

DividerX=((8*#DroptopSize#)+1)
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle #DividerX#,0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #SuperColor#,40 | StrokeWidth 0

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=[ChamBG1]
ChamBGColor2=[ChamBG2]
ChamBGColor3=[ChamBG3]
ChamFolderBG1=[ChamLumA]
ChamFolderHL=0,125,255
ChamTopBarHL=[ChamLumB]
ChamSuperColor=[ChamLumB]
ChamSuperColor2=255,255,255
ChamTopBarFontColor1=[ChamLumB]
ChamTopBarFontColor2=[ChamLumB]
ChamStrokeColor1=[ChamFG2],#StrokeOpacity1#
ChamStrokeColor2=0,0,0,#StrokeOpacity2#
ChamTopBarStrokeColor=[ChamFG2]
ChamTopBarHomeIconColor=[ChamLumB]
ChamAssistantIconTint=255,255,255
ChamAssistantIconTint2=255,255,255
ChamBatteryFillColor=[ChamLumB]
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.6

;-------------------------
