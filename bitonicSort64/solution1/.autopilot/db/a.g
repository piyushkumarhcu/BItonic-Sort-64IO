#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /afs/cern.ch/user/p/piyush/work/bitonic64/bitonicSort64/solution1/.autopilot/db/a.g.bc ${1+"$@"}
