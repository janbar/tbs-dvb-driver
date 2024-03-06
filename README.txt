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
- Branch v6.2 : build drivers with Linux kernel version from 6.2.
- Branch v6.3 : build drivers with Linux kernel version from 6.3.
- Branch v6.4 : build drivers with Linux kernel version from 6.4.
- Branch v6.8 : build drivers with Linux kernel version from 6.5 to 6.8.

See below to install the required firmwares in path /lib/firmware/.

HOWTO
=====

cd /usr/src/
wget https://github.com/janbar/tbs-dvb-driver/archive/refs/tags/6.8.1.tar.gz
tar xvfz 6.8.1.tar.gz

tar xvfz tbs-dvb-driver-6.8.1/dvb-firmwares.tar.gz -C /lib/firmware
chown root:root /lib/firmware/*.fw

dkms add tbs-dvb-driver/6.8.1
dkms build tbs-dvb-driver/6.8.1
dkms install tbs-dvb-driver/6.8.1

Once installed, the modules will be rebuilt and deployed when upgrading the
kernel. If not for any reason, type manually the install step with dkms.
