bin: access_bcm2835_wdt_reg.o mmio.o
	gcc -o bin access_bcm2835_wdt_reg.o mmio.o

access_bcm2835_wdt_reg.o : access_bcm2835_wdt_reg.c
	cc -c access_bcm2835_wdt_reg.c

mmio.o : mmio.c mmio.h
	cc -c mmio.c
