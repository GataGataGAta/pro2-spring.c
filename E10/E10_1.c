#include<stdio.h>

int main(void)
{
	int x;
	printf("品物の値段を入力してください>>>");
	scanf("%d", &x);
	
	double y = x * 0.95;
	int z = x - 100;
	
	printf("5％引き:%d\n", (int)y);
    printf("100円引き:%d\n", z);
	
	
	if((int)y < z)
	printf("5％引きが安い\n");
	
	if(z<(int)y)
	printf("100円引きが安い\n");
	
	if(z==(int)y)
	printf("同じ\n");
	
	
}
