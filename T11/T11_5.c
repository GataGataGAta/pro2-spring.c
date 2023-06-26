#include<stdio.h>

int main(void)
{
    typedef unsigned int score_t;
    score_t English, Math;

    printf("英語と数学の点数を入力してください>>>");
    scanf("%d %d", &English, &Math);

    if(English > 100)
    {
        printf("英語の点数に誤りがあります\n");
    }

    if(Math > 100)
    {
        printf("数学の点数に誤りがあります\n");
    }

    else
    {
        printf("2科目の合計点は、%d点です。\n", English + Math);
    }

}