# Get skin root path and set script location to it
$rootConfig = "$($RmAPI.VariableStr('ROOTCONFIGPATH'))"
Set-Location "$rootConfig\Visualizer\"

function New-Visualizer {

    $bands = $RmApi.Variable("Bands")
    $file = ".\Bands.inc"
    
    $ini = ""
    
    for ($i = 0; $i -lt $bands; $i++) {
        $b = New-Band -i $i 
        $ini = $ini + $b
    }
    
    $ini | Set-Content -Path $file

    $RmApi.Bang("[!Refresh]")

}

function New-Band {

    param (
        [Parameter()]
        [int64]
        $i
    )

    return @"
[MeasureBand$i]
Measure=Plugin
Plugin=AudioAnalyzer
Parent=MeasureAudioAnalyzer
Type=Child
Index=$i
Channel=Auto
HandlerName=MainFinalOutput

[MeasurePeak$i]
Measure=Plugin
Plugin=AudioAnalyzer
Parent=MeasureAudioAnalyzer
Type=Child
Index=$i
Channel=Auto
HandlerName=PeakFinalOutput

[MeterBand$i]
Meter=Bar
MeterStyle=BandStyle
MeasureName=MeasureBand$i

[MeterPeak$i]
Meter=Bar
MeterStyle=PeakStyle
MeasureName=MeasurePeak$i

"@

}

function Update {
    $bands = $RmApi.Variable("Bands")
    return $bands
}