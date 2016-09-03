## miniGPU

[![Build Status](https://travis-ci.org/yixuan/miniGPU.svg?branch=master)](https://travis-ci.org/yixuan/miniGPU)

A minimal example package to test building OpenCL programs in R packages.

On my machine

```r
library(miniGPU)
invisible(device_info())
```

```
***** Platform 0 *****
Intel(R) Corporation: OpenCL 1.2 

=== Device 0 ===
Name:                Intel(R) HD Graphics 4600
Vendor:              Intel(R) Corporation
Type:                GPU 
Available:           1
Max Compute Units:   20
Max Work Group Size: 512
Global Mem Size:     2014943642
Local Mem Size:      65536
Local Mem Type:      1
Host Unified Memory: 1

=== Device 1 ===
Name:                Intel(R) Core(TM) i7-4700HQ CPU @ 2.40GHz
Vendor:              Intel(R) Corporation
Type:                CPU 
Available:           1
Max Compute Units:   8
Max Work Group Size: 8192
Global Mem Size:     8467390464
Local Mem Size:      32768
Local Mem Type:      2
Host Unified Memory: 1


***** Platform 1 *****
NVIDIA Corporation: OpenCL 1.2 CUDA 8.0.0

=== Device 0 ===
Name:                GeForce GTX 850M
Vendor:              NVIDIA Corporation
Type:                GPU 
Available:           1
Max Compute Units:   5
Max Work Group Size: 1024
Global Mem Size:     2147483648
Local Mem Size:      49152
Local Mem Type:      1
Host Unified Memory: 0
```
