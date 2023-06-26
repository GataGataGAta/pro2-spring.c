#include<stdio.h>

int main(void)
{
    double a,x,y,z;
    int s,t,u;

    a=34;
    s=34;
    t=8;

    //変数uの値の計算と出力
    u=s/t;
    printf("変数uの値=%d\n", u);

    //変数xの値の計算と出力
    x=s/t;
    printf("変数xの値=%f\n", x);

    //変数y
    y=(double) s/(double) t;
    printf("変数yの値=%f\n", y);

    //変数z
    z=a/t;
    printf("変数zの値=%f\n", z);


}