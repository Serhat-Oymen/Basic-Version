[Rainmeter]

[Variables]
DropdownPadding=#NoIconPadding#

[MeasureSupporter]
Measure=Calc
IfCondition=#Supporter#=0
IfTrueAction=[!SetOptionGroup SupporterFolders FontColor "#*SuperColor*#,75"][!SetOptionGroup SupporterFolders PostFix " (#Context2Item10#)"][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction|LeftMouseDownAction" SupporterFolders][!SetOptionGroup SupporterFolders FillColor "Fill Color 0,0,0,0"][!UpdateMeterGroup SupportFolders][!Redraw]

[IconStyle]
ImageName=