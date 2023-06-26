#include<stdio.h>

int main(void)
{
    int total=0;
    int t;
    printf("Please enter the number>>>");
    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        total = i*i + total;
    }
    printf("1から%dまでの和は%dです。\n", t, total);

    return 0;

}