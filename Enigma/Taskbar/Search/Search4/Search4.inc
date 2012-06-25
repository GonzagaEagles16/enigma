;---------------------------------------------------------------------
; MEASURES

[MeasureSearch]
Measure=PLUGIN
Plugin=InputText.dll
UpdateDivider=-1
Command1=["#Search4Command#"] DefaultValue="Search #Search4#"
FocusDismiss=1
X=10
Y=10
W=(#TaskbarSkinWidth#*#SkinWidthMultiplier#-20)
H=20
FontFace=#Font#
FontSize=#Size1#
FontColor=#ColorBorder#
SolidColor=#ColorPanel#

;---------------------------------------------------------------------
; METERS

[Background]
Meter=Image
MeterStyle=Style#Variant#Background

[Icon]
Meter=IMAGE
MeterStyle=Style#Variant#Icon
LeftMouseUpAction=!CommandMeasure "MeasureSearch" "ExecuteBatch 1"
ImageName=#Search4Icon#

[App]
Meter=STRING
MeterStyle=Style#Variant#Text
Text="#Search4#"
LeftMouseUpAction=!CommandMeasure "MeasureSearch" "ExecuteBatch 1"

[Label]
Meter=STRING
MeterStyle=Style#Variant#Label
Text="SEARCH"