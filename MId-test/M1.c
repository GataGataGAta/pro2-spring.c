#include<stdio.h>

int main(void)
{
    int X, Y;
    printf("列番号を入力してください。>>>");
    scanf("%d", &X);

    printf("座席番号を入力してください。>>>");
    scanf("%d", &Y);

    if(X > 60 || Y > 50)
    {
        printf("error\n");
    }

    else
    {

    if(X <= 10)
    {
        printf("S席です。\n");
    }

    else if(X <= 30)
    {
        if(11 <= Y && Y <= 40)
        printf("A席です。\n");

        printf("B席です。\n");
    }

    else
    {
        printf("C席です.\n");
    }
    
    }

}