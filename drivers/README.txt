# Howto

wget https://github.com/torvalds/linux/archive/refs/tags/v${VERSION}.tar.gz
tar xvfz v${VERSION}.tar.gz

cd linux-${VERSION}
make oldconfig && make prepare

cd ../tbs-dvb-driver/drivers/
make -f Makefile KERNELDIR=../../linux-${VERSION}/

