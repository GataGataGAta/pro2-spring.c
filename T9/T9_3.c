#include<stdio.h>

int main(void)
{
	int i;
	int bace = -4;
	int *p = &bace;
	
	for(i = 0; i < 5; i++)
	{
		printf("%p ", p);
		p += 3;
	}
	
	printf(" size = %zd\n", sizeof(int));
	
	return 0;
}