#include <stdio.h>

int main(void)
{
    int n = 7;     // 列の数
    int o = n - 1; //&の数
    int j = 0;

    for (int k = 0; k < n * n - n; k++)
    {
        j = k % n;
        if (j < o)
        {
            printf("&");
        }
        else
        {
            printf("|");
        }
        if ((k % n == (n - 1)) && k != 0)
        {
            printf("\n");
            o--;
        }
    }
}