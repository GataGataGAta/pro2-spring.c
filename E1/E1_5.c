#include<stdio.h>

int main(void)
{
    char a,b,result;

    a=50;
    b=100;

    result=a+b;
    printf("足し算の答えは:%d + %d = %d\n", a, b, result);

    result=a-b;
    printf("引き算の答えは:%d - %d = %d\n", a, b, result);

    result=a*b;
    printf("掛け算の答えは:%d * %d = %d\n", a, b, result);

    result=a/b;
    printf("割り算の答えは:%d / %d = %d\n", a, b, result);

    return 0;


}