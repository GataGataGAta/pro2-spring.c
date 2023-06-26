#include<stdio.h>

int main(void)
{
    int m;
    printf("整数を入力してください>>>");
    scanf("%d", &m);


    while(m > 0)
    {
        printf("%d\n", m % 10);
        m = m / 10; 
    }
    //printf("%dの各桁の和は%d\n",n, m);
}