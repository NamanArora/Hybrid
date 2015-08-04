#!/bin/sh
# path to kernel sources
KERNEL_SRC_PATH=/media/vinay/Linux/Xperia_E3/HYBRID

make clean
make mrproper
make hybrid_defconfig
make -j3
./setup/dtbTool --force-v2 -o ./setup/dt.img -s 2048 -p $KERNEL_SRC_PATH/scripts/dtc/ $KERNEL_SRC_PATH/arch/arm/boot/
echo building boot.img in kernel source folder.
./setup/mkbootimg --kernel $KERNEL_SRC_PATH/arch/arm/boot/zImage --ramdisk ./setup/ramdisk.img --base 0x00000000 --ramdisk_offset 0x02000000 --tags_offset 0x01E00000 --pagesize 2048 --cmdline "console=ttyHSL0,115200,n8 androidboot.console=ttyHSL0 androidboot.hardware=qcom user_debug=31 msm_rtb.filter=0x37 selinux=0" --dt ./setup/dt.img -o boot.img
echo boot.img ready.
