[MeasureNetworkIn]
Measure=NetIn
Interface=Best
MinValue=0
MaxValue=(#DownloadSpeedMegabit# * 1048576)

[MeasureNetworkOut]
Measure=NetOut
Interface=Best
MinValue=0
MaxValue=(#UploadSpeedMegabit# * 1048576)
