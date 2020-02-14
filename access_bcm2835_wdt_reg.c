#include "mmio.h"
#include <stdio.h>

#define PM_RSTC 0x7e10001c
#define PM_RSTS 0x7e100020
#define PM_WDOG 0x7e100024

#define REGISTER_BYTE_SIZE 4

int main()
{
	void *mem;
	uint32_t ret;

	mem = mmio_map_simple(PM_RSTC, REGISTER_BYTE_SIZE);
	ret = mmio_read32(mem);
	printf("PM_RSTC: %x\n", ret);

	mem = mmio_map_simple(PM_RSTS, REGISTER_BYTE_SIZE);
	ret = mmio_read32(mem);
	printf("PM_RSTC: %x\n", ret);

	mem = mmio_map_simple(PM_WDOG, REGISTER_BYTE_SIZE);
	ret = mmio_read32(mem);
	printf("PM_RSTC: %x\n", ret);

	return 0;
}
