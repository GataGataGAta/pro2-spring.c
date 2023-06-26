#include<stdio.h>

int main(void)
{
    int n,m,i,j;
    printf("二つの数字を入力してください---->");
    scanf("%d,%d", &n, &m);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}