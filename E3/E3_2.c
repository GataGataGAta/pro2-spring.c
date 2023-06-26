#include<stdio.h>

int main(void)
{
    int total = 0;
    int max, n;
    printf("整数を入力してください---->");
    scanf("%d", &max);

    if(max > 20000)
    {
        printf("入力する整数は20000以下にしてください。\n");
    }

    else
    {
    for(n = 1; n <= max; n++)
    {

        total = total + n;
        //printf("合計%d\n", total);
        //printf("変数%d\n", n);

        if(max < total)
        {
            printf("変数->%d\n", n);
            printf("合計->%d\n", total);
            break;
        }
    }
    

    }

    return 0;

}