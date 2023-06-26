#include<stdio.h>

int max2(int a, int b)
{
    if(a > b)
    return a;

    else
    return b;
}

int max4( int a, int b, int c, int d )
{
    return max2(max2(a,b), max2(c,d));
}

int min2(int a, int b)
{
    if(a > b)
    return b;

    else
    return a;
}

int min4(int a, int b, int c, int d)
{
    return min2(min2(a, b), min2(c, d));
}

int main(void)
{
    int a, b, c, d;
    printf("整数を四つ入力してください>>>");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("最大値:%d\n", max4(a, b, c, d));
    printf("最小値:%d\n", min4(a, b, c, d));
    
}