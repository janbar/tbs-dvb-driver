KERNELDIR ?= /lib/modules/$(shell uname -r)/build
SRC := $(shell pwd)/src

all:
	$(MAKE) -C $(KERNELDIR) M=$(SRC) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(SRC) clean

modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(SRC) modules_install
