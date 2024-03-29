#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

double dice(int i)
{
    int a, j;
    double sum = 0.0;

    for (j = 0; j < i; j++)
    {
        a = 1 + rand() % 6;
        sum += a;
    }

    return sum / i;
}

double dice_average(int i)
{
    int j, a;
    double sum = 0.0;

    for (j = 0; j < i; j++)
    {
        a = 1 + rand() % 6;
        sum += a * a;
    }

    return sum / i;
}

int main(void)
{
    double a = 0.0;
    double b = 0.0;
    int N = 10000;
    int M = 1000000;
    double tmp = 0.0;

    srand((unsigned int)time(NULL));

    for(int i = 0; i < M ; i++)
    {
        tmp = dice(N);
        a += tmp;
        b += tmp * tmp;
    }

    printf("N = %d 標本平均の平均:%lf\n", N, a / M);
    printf("N = %d 標本平均の分散:%lf\n", N, (b / M) - pow(a / M, 2));

    return 0;
}
