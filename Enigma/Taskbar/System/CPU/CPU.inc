;---------------------------------------------------------------------
; MEASURES

[MeasureCPU]
Measure=CPU

;---------------------------------------------------------------------
; METERS

[Background]
Meter=Image
MeterStyle=Style#Variant#Background

[CPU]
Meter=STRING
MeterStyle=Style#Variant#Text
MeasureName=MeasureCPU

[Label]
Meter=STRING
MeterStyle=Style#Variant#Label
Text="CPU"