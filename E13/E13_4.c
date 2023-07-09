#include <stdio.h>
#include<math.h>

double g(double x, double h)
{
    return (exp(x+h) - exp(x)) / h;
}

int main( void )
{
    int i, w;
    double a, h;

    printf("実数を入力してください>>>");
    scanf("%lf", &a);

    w = 1;
    for( i = 0; i < 20; i ++ )
    {

        h = 1.0 / (double)w;
        //printf("%d \t %.25f \n", w, h);  

        /* 関数の呼び出し */
        g(a, h);

        /* 数値の表示 */
        printf("g(%2d, %f) = %f\n",w, h, g(a, h));  

        w *= 2;

    }

  return 0;
}