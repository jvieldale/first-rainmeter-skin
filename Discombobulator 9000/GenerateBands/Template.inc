[MeasureAudioRepeat]
Measure=Plugin
Group=Audio
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=(Abs((#Invert# = 1 ? (#FirstBandIndex# + #Bands# - 1) : 0) - Repeat))
[MeterRoundlineRepeat]
Meter=Roundline