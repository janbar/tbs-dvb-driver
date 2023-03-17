HOWTO
=====

cd /usr/src/
tar xvfz tbs-dvb-driver-1.0.0.tar.gz

tar xvfz tbs-dvb-driver-1.0.0/dvb-firmwares.tar.gz -C /lib/firmware
chown root:root /lib/firmware/*.fw

dkms add -m tbs-dvb-driver/1.0.0
dkms build -m tbs-dvb-driver/1.0.0
dkms install -m tbs-dvb-driver/1.0.0

