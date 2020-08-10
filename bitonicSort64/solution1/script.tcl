############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project bitonicSort64
set_top bitonicSort64
add_files src/bitonic32Dec.cpp
add_files src/bitonic32Inc.cpp
add_files src/bitonicFun.cpp
add_files src/bitonicSort.h
add_files src/bitonicSort64.cpp
add_files -tb src/bitonicSort64_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flgc2104-1-e} -tool vivado
create_clock -period 360MHz -name default
set_clock_uncertainty 30%
#source "./bitonicSort64/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
