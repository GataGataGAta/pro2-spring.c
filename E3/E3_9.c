#include <stdio.h>

int main(void)
{
    int num = 2985;
    int i;
    int j;
    int input_num;

    for (i = 1, j = 5; i < 6; i++, j--)
    {
        printf("%d回目の数字をどうぞ  ?  >>>", i);
        scanf("%d", &input_num);

        if (input_num > num)
        {
            printf("大きいです!\n");
        }

        else if (input_num < num)
        {
            printf("小さいです!\n");
        }

        else
        {
            printf("******************\n");
            printf("* 大正解 %d点です *\n", j);
            printf("******************\n");
            break;
        }
    }
    if (input_num != num)
    {
        printf("0点です。もう一回チャレンジしてね!\n");
    }

    return 0;
}