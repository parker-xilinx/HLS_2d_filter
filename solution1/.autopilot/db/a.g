#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /group/techsup/parkerh/hls_video_block/solution1/.autopilot/db/a.g.bc ${1+"$@"}
