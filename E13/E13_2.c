#include<stdio.h>

double powdbl(double x, int p)
{
    double y = 1;

    while(p-- > 0)
    {
        y *= x;
    }

    return y;
}

int main(void)
{
    int n, i;
    double x;
    double y = 0.0;
    printf("整数と実数を入力してください>>>");
    scanf("%d %lf", &n, &x);

    for(i = 1; i <= n; i++)
    {
        y += i * powdbl(x, i);
    }
    printf("%f\n", y);

}