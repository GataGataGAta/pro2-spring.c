#include<stdio.h>

int main(void)
{
    int i;
    int prize[5];
    prize[0] = 10000;
    prize[1] = 5000;
    prize[2] = 3000;
    prize[3] = 1000;
    prize[4] = 500;

    printf("数字を入力してください>>>");
    scanf("%d", &i);
    if (i > 5 || i < 1)
    {
        printf("1-5の数字を入力してください。\n");
    }
    else
    {
        printf("%d等は%d円です\n", i, prize[i - 1]);
    }

}