#include<stdio.h>

#define N 10

int main(void)
{
    int d[N] = {0, 1, 2, 3, 4, 5, 6, 7, 12, 9};
    for(int i = 0; i < 10; i++)
    {
        if (d[i] % 3 == 0 && d[i] != 0)
        {
            printf("%d\n", d[i]);
        }
    }
    return 0;


}