#include<stdio.h>

int main(void)
{
    int a, b, n, count;
    count = 0;
    printf("整数を入力してください---->");
    scanf("%d", &n);

    for(a = 1; a <= 10; a++)
    {
        for(b = 1; b <= 20; b++)
        {
            if(a + b < n)
            {
               count++;
               //printf("(%d,%d)\n",a ,b);
            }
        }
    }
    printf("a+bが%d未満であるようなaとbの組は%d個あります。\n",n ,count);
}