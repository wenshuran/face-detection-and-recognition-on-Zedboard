#define PAGE_SIZE  ((size_t)getpagesize())
#define PAGE_MASK ((uint64_t) (long)~(PAGE_SIZE - 1))
 
void Xil_Out32(int Handler, uint64_t phyaddr, uint32_t val)
{
	int fd;
	volatile uint8_t *map_base;
	uint64_t base = phyaddr & PAGE_MASK;
	uint64_t pgoffset = phyaddr & (~PAGE_MASK);
 
	map_base = (volatile uint8_t*)mmap(NULL, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, Handler, base);
	if(map_base == MAP_FAILED)
	{
		perror("mmap:");
	}
	*(volatile uint32_t *)(map_base + pgoffset) = val; 
	munmap((void *)map_base, PAGE_SIZE);
}
 
int Xil_In32(int Handler, uint64_t phyaddr)
{
	int fd;
	uint32_t val;
	volatile uint8_t *map_base;
	uint64_t base = phyaddr & PAGE_MASK;
	uint64_t pgoffset = phyaddr & (~PAGE_MASK);
	//open /dev/mem
	//mmap
	map_base = (volatile uint8_t*)mmap(NULL, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, Handler, base);
	if(map_base == MAP_FAILED)
	{
		perror("mmap:");
	}
	val = *(volatile uint32_t *)(map_base + pgoffset);
	munmap((void *)map_base, PAGE_SIZE);
	return val;
}
