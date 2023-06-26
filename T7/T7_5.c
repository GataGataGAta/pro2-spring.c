#include <stdio.h>

#define M 3

void print_array(double a[M][M])
{
    int i, j;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%5.1f", a[i][j]); // a[i][j] を表示, 書式は %5.1f とする
            printf(" ");              // 1個の数字を表示するごとにスペースを入れておくこと
        }
        printf("\n"); // 改行
    }
}

int main(void)
{
    double c[M][M];

    double a[M][M] = {{2.5, 0.0, -1.0},

                      {-1.0, 1.5, 0.0},

                      {5.0, 4.0, 3.0}};

    double b[M][M] = {{-2.0, 4.5, 1.0},

                      {4.0, -3.0, 2.5},

                      {-2.5, 0.0, -2.0}};

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            c[i][j] = 3 * a[i][j] + 2 * b[i][j];
        }
    }

    print_array(c);

    return 0;
}