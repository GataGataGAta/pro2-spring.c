#include<stdio.h>

int main(void)
{
    int  n;
    double a, r;
    printf("整数を入力してください>>>");
    scanf("%d %lf %lf", &n, &a, &r);

    printf("%lf\n", a);
    for(int i = 0; i < n - 1; i++)
    {
        a = a * r;
        printf("%lf\n", a);

    }

}