#include<stdio.h>
#include<math.h>

double func( double x )
{
    return x * x - 4 * x + 2;
}

double inverse( double x )
{
    return 2 + sqrt( x + 2 );
}

int main(void)
{
    int n;
    double a, b;
    printf("2以上の正数を入力してください。--->");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("2以上の正数を入力してください");
    }

    else
    {
        for(int i = 2; i < n; i++)
        {
        a = func(i);
        printf("%f\n", a);

        b = inverse(a);
        printf("%f\n", b);
        }

    }

}

