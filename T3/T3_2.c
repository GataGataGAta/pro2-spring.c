#include <stdio.h>

int main(void)
{
    int i, t;
    int total = 0;

    printf("整数を入力してください---->");
    scanf("%d", &t);
    i = 1;

    while (i <= t)
    {

        total = total + i * i;
        printf("%d週目、total=%d\n", i, total);
        i++;
    }
    printf("1から%dまでの和は%dです。\n",t, total);

    return 0;
}