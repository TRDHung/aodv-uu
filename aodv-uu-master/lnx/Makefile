
KFLAGS   := -D__KERNEL__ -DMODULE $(MOD_DEFS)
INCL    := $(addprefix -I,$(KERN_INCL) $(EXTRA_INCL))
INCL    += $(MOD_INCL)
EXTRA_CFLAGS += $(MOD_CFLAGS) $(INCL) $(KFLAGS) $(MOD_EXTRA) $(KDEBUG)



KOBJS := kaodv-mod.o kaodv-debug.o kaodv-netlink.o kaodv-queue.o kaodv-ipenc.o kaodv-expl.o
KOBJS_ARM := $(KOBJS:%.o=%-arm.o)
KOBJS_MIPS := $(KOBJS:%.o=%-mips.o)
obj-y := $(KOBJS)

obj-m += kaodv.o
kaodv-objs := kaodv-mod.o kaodv-debug.o kaodv-netlink.o kaodv-queue.o kaodv-ipenc.o kaodv-expl.o 

KERNEL=$(shell uname -r)
KERNEL_DIR=/lib/modules/$(KERNEL)/build
KERNEL_INC=$(KERNEL_DIR)/include
THIS_DIR=$(PWD)
SRC_DIR =/usr/src/linux-headers-3.14-kali1-common

# You might want to use gcc32 for the kernel module on Fedora core 1
KCC=gcc
LD=ld
XDEFS=


.PHONY: clean clean-2.4 clean-2.6 indent default

# Check for kernel version

default: kaodv.ko
clean: clean-2.6
 


#default: kaodv.ko
$(KOBJS): %.o: %.c Makefile
	$(KCC) $(KCFLAGS) -c -o $@ $<

$(KOBJS_ARM): %-arm.o: %.c Makefile
	$(KCC) $(KCFLAGS_ARM) -D ARM -c -o $@ $<

$(KOBJS_MIPS): %-mips.o: %.c Makefile
	$(KCC) $(KCFLAGS_MIPS) -D MIPS -c -o $@ $<

kaodv.o: $(KOBJS) Makefile
	$(LD) -r $(KOBJS) -o $@
	cp $@ ../

kaodv-arm.o: $(KOBJS_ARM) Makefile
	$(LD) -r $(KOBJS_ARM) -o $@
	cp $@ ../kaodv.o

kaodv-mips.o: $(KOBJS_MIPS) Makefile
	$(LD) -r $(KOBJS_MIPS) -o $@
	cp $@ ../kaodv.o

kaodv.ko: $(KOBJS:%.o=%.c) Makefile
	$(MAKE) KBUILD_VERBOSE=$(KBUILD_VERBOSE) CONFIG_MODULE_SIG= -C $(KERNEL_DIR) SRCROOT=$(SRC_DIR) SUBDIRS=$(CURDIR) modules
	cp $@ ../

kaodv-arm.ko: $(KOBJS_ARM:%.o=%.c) Makefile
	$(MAKE) KBUILD_VERBOSE=$(KBUILD_VERBOSE) CONFIG_MODULE_SIG= -C $(KERNEL_DIR) SRCROOT=$(SRC_DIR) SUBDIRS=$(CURDIR) modules
	cp $@ ../kaodv.ko

kaodv-mips.ko: $(KOBJS_MIPS:%.o=%.c) Makefile
	$(MAKE) KBUILD_VERBOSE=$(KBUILD_VERBOSE) CONFIG_MODULE_SIG= -C $(KERNEL_DIR) SRCROOT=$(SRC_DIR) SUBDIRS=$(CURDIR) modules
	cp $@ ../kaodv.ko


clean-2.6:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(CURDIR) clean
	rm -rf *.o *~

clean-2.4:
	rm -rf *.o *~

TAGS:
	etags *.c *.h
indent:
	indent -kr -i8 -ts8 -sob -l80 -ss -ncs *.c *.h 


