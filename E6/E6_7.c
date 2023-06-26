#include <stdio.h>

#define N 10

int main(void)
{
    int d[N] = {54, 28, 72, 9, 39, 44, 69, 15, 97, 88};
    int temp;
    int i, j;

    for (int k = 0; k < 10; k++)
    {
        printf("%d ", d[k]);
    }
    printf("\n");
    printf("初期値\n");

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (d[i] > d[j])
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;

                for (int k = 0; k < 10; k++)
                {
                    printf("%d ", d[k]);
                }
                printf("\n");
                printf("%dと%dの値を入れ替え\n", d[i], d[j]);
            }
        }
    }

   
    return 0;
}