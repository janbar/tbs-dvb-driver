TBSDIR := $(shell pwd)
SRC := $(shell pwd)/src

all:
	$(MAKE) -C $(KERNELDIR) M=$(SRC) TBSDIR=$(TBSDIR) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(SRC) clean

modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(SRC) modules_install

