export PATH=/proj/gsd/vivado/Vivado/2018.2/tps/lnx64/binutils-2.26/bin:/proj/gsd/vivado/Vivado/2018.2/tps/lnx64/gcc-6.2.0/bin:/proj/gsd/vivado/Vivado/2018.2/msys64/usr/bin:/proj/gsd/vivado/Vivado/2018.2/msys64/mingw64/bin:/proj/gsd/vivado/Vivado/2018.2/bin:/proj/gsd/vivado/Vivado/2018.2/lnx64/bin:/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/bin:/proj/gsd/vivado/Vivado/2018.2/bin:/proj/gsd/vivado/Vivado/2018.2/tps/lnx64/jre/bin:/proj/gsd/vivado/SDK/2018.2/bin:/proj/gsd/vivado/Vivado/2018.2/ids_lite/ISE/bin/lin64:/proj/gsd/vivado/SDx/2018.2/bin:/proj/gsd/vivado/Model_Composer/2018.2/bin:/proj/gsd/vivado/SDK/2018.2/gnu/microblaze/lin/bin:/proj/gsd/vivado/SDK/2018.2/gnu/arm/lin/bin:/proj/gsd/vivado/SDK/2018.2/gnu/microblaze/linux_toolchain/lin64_le/bin:/proj/gsd/vivado/SDK/2018.2/gnu/aarch32/lin/gcc-arm-linux-gnueabi/bin:/proj/gsd/vivado/SDK/2018.2/gnu/aarch32/lin/gcc-arm-none-eabi/bin:/proj/gsd/vivado/SDK/2018.2/gnu/aarch64/lin/aarch64-linux/bin:/proj/gsd/vivado/SDK/2018.2/gnu/aarch64/lin/aarch64-none/bin:/proj/gsd/vivado/SDK/2018.2/gnu/armr5/lin/gcc-arm-none-eabi/bin:/proj/gsd/vivado/SDK/2018.2/tps/lnx64/cmake-3.3.2/bin:/proj/gsd/vivado/DocNav:/proj/systest/bin/:/tools/guup/tools/bin/lin64:/tools/guup/tools/fluxbox/lin64/bin:/group/icdes/bin:.:/usr/local/bin:/usr/sbin:/sbin:/usr/bin:/bin:/mis/TREE/bin:/usr/X11R6/bin:/usr/lib64/qt-3.3/bin:/usr/local/sbin:/opt/puppetlabs/bin
export LD_LIBRARY_PATH=/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/gdb_v7_2:/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/graphviz/lib:/proj/gsd/vivado/Vivado/2018.2/lnx64/bin:/proj/gsd/vivado/Vivado/2018.2/lib/lnx64.o/Default:/proj/gsd/vivado/Vivado/2018.2/lib/lnx64.o:/proj/gsd/vivado/Vivado/2018.2/tps/lnx64/jre/lib/amd64:/proj/gsd/vivado/Vivado/2018.2/tps/lnx64/jre/lib/amd64/server:/proj/gsd/vivado/SDx/2018.2/lib/lnx64.o/Default:/proj/gsd/vivado/SDx/2018.2/lib/lnx64.o:/proj/gsd/vivado/SDx/2018.2/runtime/lib/x86_64:/proj/gsd/vivado/Vivado/2018.2/bin/../lnx64/tools/dot/lib:/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/fpo_v7_0:/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/fft_v9_1:/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/opencv:/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/fir_v7_0:/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/dds_v6_0:/proj/gsd/vivado/Vivado/2018.2/lnx64/lib/csim
export HDI_APPROOT=/proj/gsd/vivado/Vivado/2018.2
export XILINX_OPENCL_CLANG=/proj/gsd/vivado/Vivado/2018.2/lnx64/tools/clang
export RDI_PLATFORM=lnx64
bugpoint -mlimit=32000  --load libhls_support.so  --load libhls_bugpoint.so  -hls -strip  -function-uniquify -auto-function-inline -globaldce  -ptrArgReplace -mem2reg -instcombine -dce  -reset-lda  -loop-simplify -indvars -licm -loop-dep  -loop-bound -licm -loop-simplify -flattenloopnest  -array-flatten -gvn -instcombine -dce  -array-map -dce -func-legal  -gvn -adce -instcombine -cfgopt -simplifycfg -loop-simplify   -array-burst -promote-global-argument -dce  -axi4-lower -array-seg-normalize  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa -gvn -gvn  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa -dse -adse -adce -licm  -inst-simplify -dce  -globaldce -instcombine -array-stream -eliminate-keepreads -instcombine  -dce   -deadargelim -doublePtrSimplify  -doublePtrElim -dce -doublePtrSimplify -promote-dbg-pointer  -dce -scalarrepl -mem2reg -disaggr -norm-name -mem2reg  -instcombine  -dse -adse -adce -ptrLegalization -dce -auto-rom-infer -array-flatten -dce -instcombine -check-doubleptr  -loop-rot -constprop -cfgopt -simplifycfg -loop-simplify -indvars -pointer-simplify -dce -loop-bound  -loop-simplify -loop-preproc  -constprop -global-constprop -gvn -mem2reg -instcombine -dce  -loop-bound  -loop-merge -dce  -bitwidthmin  -deadargelim -dce  -canonicalize-dataflow -dce  -scalar-propagation -deadargelim -globaldce -mem2reg  -read-loop-dep  -interface-preproc -directive-preproc -interface-gen  -bram-byte-enable  -deadargelim -inst-simplify -dce  -gvn -mem2reg -instcombine -dce -adse  -loop-bound  -instcombine -cfgopt -simplifycfg -loop-simplify  -clean-region -io-protocol  -find-region -mem2reg  -bitop-raise  -inst-simplify -inst-rectify -instcombine -adce -deadargelim  -loop-simplify -phi-opt -bitop-raise  -cfgopt -simplifycfg -strip-dead-prototypes  -interface-lower -bitop-lower -intrinsic-lower -auto-function-inline  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa  -inst-simplify -simplifycfg   -loop-simplify  -mergereturn -inst-simplify -inst-rectify  -dce -load-elim -bitop-lower  -loop-rewind -pointer-simplify -dce -cfgopt  -dce -bitwidth -loop-dep -read-loop-dep -dce  -check-stream -norm-name -legalize  -validate-dataflow -dead-allocation-elimination  /group/techsup/parkerh/hls_video_block/hls_video_block/solution1/.autopilot/db/a.o.2.bc
llvm-dis bugpoint-reduced-simplified.bc 
