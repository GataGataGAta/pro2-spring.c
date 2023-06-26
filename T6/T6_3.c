#include <stdio.h>

int main(void)
{
    int i = 4;
    int array[4];
    array[0] = 80;
    array[1] = 75;
    array[2] = 50;
    array[3] = 90;

    for (int j = 0; j < i; j++)
    {
        printf("要素[%d] = %d\n",j, array[j]);
    }
    printf("\n");
    int k;
    k = array[0] + array[1] + array[2] + array[3];

    int p;
    int q = 0;
    for(p = 0; p <= 3; p++)
    {
        q += array[p];
    }
    printf("合計(not for)%d\n", k);
    printf("合計(for)%d\n", q);

    return 0;
}