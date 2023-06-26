#include <stdio.h>

int main(void)
{
    int x;

    printf("西暦を入力してください。");
    scanf("%d" , &x);

    if(x >= 0 && x>=2023)
        printf("xは2023以下の整数です。\n");
    else if(x>=2018)
        printf("令和です。\n");
    else if(x >= 1989 && x<2018)
        printf("平成です。\n");
    else if(x >= 1926 && x<=1989)
        printf("昭和です。\n");
    else if(x<=1926)
        printf("元号は不明です。\n");
    
    
    return 0;



}