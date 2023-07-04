#include<stdio.h>

double comp(double x)
{
    return 0.9 * x + 2.5;
}

int main(void)
{
    int n;
    double m;
    double a;
    printf("実数を入力してください>>>");
    scanf("%lf", &m);

    a = m;
    printf("初項: %lf\n", a);

    for(n = 1; n < 20; n++)
    {
        a = comp( a );
        printf("a%d: %lf\n",n + 1, a);
    }

    return 0;
}