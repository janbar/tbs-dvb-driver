ABOUT
=====

This contains source files and tools to build the TBS-ECP3 drivers with the
stable media stack of your Linux OS. The build is automated with DKMS to
install all required modules after each upgrade of the kernel tree.


FIRST
=====

Install DKMS if you haven't already, using the packages manager (apt, zypper),
then enable and start the service dkms.
Clone or download the right branch of this repository, depending on the kernel
version you are using:

- Branch v5.19: build drivers with Linux kernel version from 5.4 to 5.19.
- Branch v6.2 : build drivers with Linux kernel version from 6.2 and up*.

See below to install the required firmwares in path /lib/firmware/.

HOWTO
=====

cd /usr/src/
wget https://github.com/janbar/tbs-dvb-driver/archive/refs/heads/v6.2.zip
unzip v6.2.zip

tar xvfz tbs-dvb-driver-6.2/dvb-firmwares.tar.gz -C /lib/firmware
chown root:root /lib/firmware/*.fw

dkms add tbs-dvb-driver/6.2
dkms build tbs-dvb-driver/6.2
dkms install tbs-dvb-driver/6.2

Once installed, the modules will be rebuilt and deployed when upgrading the
kernel. If not for any reason, type manually the install step with dkms.
