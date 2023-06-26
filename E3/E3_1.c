#include<stdio.h>

int main(void)
{
    int i, n, total;
    printf("整数を入力してください---->");
    scanf("%d", &n);
    total = 0;

    for(i = 0; i < n; i += 3)
    {
        if(i % 3 == 0)
        {
            total = total + i;
        }
        
    }
    printf("%d未満の整数のうち、3の倍数であるものの総和は%d\n",n, total);


}