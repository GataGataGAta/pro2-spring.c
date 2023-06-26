#include<stdio.h>

int recurrence( int x, int n )
{
    return 2 * x - n * n;
}

int main(void)
{
    int x, y;
    printf("整数を入力してください>>>");
    scanf("%d", &x);
    
    //初項を表示
    printf("a_0 = %d\n", x);

    y = 0;
    for(int i = 0; i < 9; i++)
    {
        y = recurrence(x, i);
        printf("a_%d = %d\n", i, y);
        x = y;
    }
    printf("\n");

    return 0;
}