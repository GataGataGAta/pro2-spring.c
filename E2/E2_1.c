#include<stdio.h>

int main(void)
{
    int math, eng;

    printf("数学＞");
    scanf("%d", &math);

    printf("英語＞");
    scanf("%d", &eng);

    if(math>=90)
        printf("数学は秀です\n");

    if(math<90 && math>=80)
        printf("数学は優です\n");
    
    if(math<eng)
        printf("英語の方が得意です。\n");

    if(math<60 && eng<60)
        printf("学習不足です。\n");

    if(math>=85 || eng>=85)
        printf("問題ありません。\n");

    else
    {
        printf("");
    }

   



    
}