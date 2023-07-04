#include<stdio.h>

int main(void)
{
    int i, j, k;
    int c = 0;

    for(i = 0; i <= 5; i++)
    {
        for(j = 0; j <= 10; j++)
        {
            for(k = 0; k <= 50; k++)
            {
                if((i * 1000 + j * 500 + k * 100) == 5000)
                {
                    printf("千円札:%d枚 五百円%d枚 百円%d枚\n",i, j, k);
                    c++;
                }
            }
        }
    }

    printf("総数:%d\n", c);


}