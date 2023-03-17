HOWTO
=====

cd /usr/src/
wget https://github.com/janbar/tbs-dvb-driver/archive/refs/heads/v6.2.zip
unzip v6.2.zip

tar xvfz tbs-dvb-driver-6.2/dvb-firmwares.tar.gz -C /lib/firmware
chown root:root /lib/firmware/*.fw

dkms add -m tbs-dvb-driver/6.2
dkms build -m tbs-dvb-driver/6.2
dkms install -m tbs-dvb-driver/6.2

