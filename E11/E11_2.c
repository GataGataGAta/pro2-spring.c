#include<stdio.h>

struct s_complex
{
    double re; //複素数の実数部
    double im; //複素数の虚数部
};

typedef struct s_complex complex_t;

void complex_print( complex_t a)
{
    printf("%lf + %lfi\n", a.re, a.im);
}

complex_t complex_add( complex_t a, complex_t b )
{
    complex_t sum;
    sum.im = a.im + a.im;
    sum.re = a.re + b.re;
    return sum;
}

complex_t complex_mul( complex_t a, complex_t b )
{
    complex_t prod;
    prod.im = a.im * b.im;
    prod.re = a.re * b.re;
    return prod;
}

int main(void)
{
    complex_t x, y;

    printf("複素数を入力して下さい。");
    scanf("%lf %lf", &x.re, &x.im);

    printf("複素数を入力して下さい。");
    scanf("%lf %lf", &y.re, &y.im);

    printf("一つ目の複素数:");
    complex_print( x );

    printf("二つ目の複素数:");
    complex_print( y );

    complex_t add, mul;
    add = complex_add( x, y );
    printf("足し算:");
    complex_print( add );

    mul = complex_mul( x, y );
    printf("掛け算:");
    complex_print( mul );

    return 0;

}