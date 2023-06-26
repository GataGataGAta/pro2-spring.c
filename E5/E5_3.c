#include <stdio.h>

double combi2(int, int);

int main(void)
{
    int t, m;

    for (t = 0; t <= 100; t++)
    {
        for (m = 0; m <= t; m++)
        {
            printf("%dC%d=%f\t", t, m, combi2(t, m)); // combi関数の呼び出し
        }
        printf("\n");
    }

    return 0;
}


double combi2(int n, int r)
{
    double x = 1.0;
    int i;
    for (i = 0; i < r; i++)
    {
        x = x * (n - i) / (i + 1);
    }

    return x;
}