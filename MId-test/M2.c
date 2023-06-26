#include<stdio.h>

int main(void)
{
    int n;
    printf("整数を入力してください>>>");
    scanf("%d", &n);

    if(n > 80)
    printf("入力する整数の値は1から80の間にしてください。\n");

    for(int i = n; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}