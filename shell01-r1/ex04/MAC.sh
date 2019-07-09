#!bin/sh
ifconfig -a | grep "ether " | rev | cut -d " " -f2 | rev
