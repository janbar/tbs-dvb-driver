HOWTO
=====

cd /usr/src/
wget https://github.com/janbar/tbs-dvb-driver/archive/refs/heads/v5.19.zip
unzip v5.19.zip

tar xvfz tbs-dvb-driver-5.19/dvb-firmwares.tar.gz -C /lib/firmware
chown root:root /lib/firmware/*.fw

dkms add -m tbs-dvb-driver/5.19
dkms build -m tbs-dvb-driver/5.19
dkms install -m tbs-dvb-driver/5.19
