#include<stdio.h>
#include<math.h>

double compg( double x )
{
    return sqrt(x + 1.0);
}

int main(void)
{
    int n, i;
    double x;
    printf("整数と実数を入力してください>>>");
    scanf("%d %lf", &n, &x);

    for(i = 0; i < n; i++)
    {
        x = compg(x);
        printf("%f\n", x);
    }
}
