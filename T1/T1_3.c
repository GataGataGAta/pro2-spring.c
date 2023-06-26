#include<stdio.h>

int main(void)
{
    int a,b,c,d,e,q,r;

    //a,b,cの値の入力と出力
    a=24;
    b=8;
    c=10;
    printf("a,の値= %d\n", a);
    printf("b,の値= %d\n", b);
    printf("c,の値= %d\n", c);

    //dの値の計算と出力
    d=2*a+3*b-c;
    printf("d,の値= %d\n", d);

    //q,rの値の計算と出力
    q=a/b;
    r=a%b;
    printf("q,の値= %d\n", q);
    printf("r,の値= %d\n", r);

    //eの値の計算と出力
    e=(a+b)*(q+r);
    printf("e,の値= %d\n", e);


    return 0;


}