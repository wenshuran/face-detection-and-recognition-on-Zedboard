#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/wenshuran/hdcourse/test_zynqnet/test_zynq/solution1/.autopilot/db/a.g.bc ${1+"$@"}
