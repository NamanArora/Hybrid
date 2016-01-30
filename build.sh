#!/bin/sh

export CROSS_COMPILE=/home/hell_lock/arm-cortex_a7-linux-gnueabihf-linaro_4.9/bin/arm-cortex_a7-linux-gnueabihf-

make clean
make hybrid_hspa_defconfig
make -j4
