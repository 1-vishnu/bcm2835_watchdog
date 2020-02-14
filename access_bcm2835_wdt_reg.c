#include "mmio.h"
#include <stdio.h>

#define PM_WDT_BASE 0x7e100000

#define PM_RSTC 0x1c
#define PM_RSTS 0x20
#define PM_WDOG 0x24

int main()
{
	void *mem;
	uint32_t ret;
	ssize_t mem_size;
/* read */
/*	mem = mmio_map_simple(PM_RSTC, mem_size);
	ret = mmio_read32(mem);
	printf("PM_RSTC: %x\n", ret);

	mem = mmio_map_simple(PM_RSTS, mem_size);
	ret = mmio_read32(mem);
	printf("PM_RSTS: %x\n", ret);

	mem = mmio_map_simple(PM_WDOG, mem_size);
	ret = mmio_read32(mem);
	printf("PM_WDOG: %x\n", ret);
*/

//write
	mem_size = 0x28;

	mem = mmio_map_simple(PM_WDT_BASE, mem_size);
	mmio_write32((uint8_t *)mem + 4, (uint32_t)1);

	return 0;
}
