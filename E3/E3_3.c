#include<stdio.h>

int main(void)
{
    int total = 0;
    int max, i;
    i = 0;
    printf("整数を入力してください---->");
    scanf("%d", &max);

    if(max > 20000)
    {
        printf("入力する整数は20000以下にしてください。\n");
    }

    else
    {
    while(total <= max)
    {
        total = total + i;
        i++;

        //printf("合計%d\n", total);
        //printf("変数%d\n", i);

    }
    printf("合計%d\n", total);
    printf("変数n=%d\n", i-1);
    //値が合わない理由、totalにiを入れた後にi++をしてからwhileループを抜けてしまっているから、iの値が予期したものより一つ大きくなっていると考えられる。
    }
}