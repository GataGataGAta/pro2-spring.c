#include<stdio.h>

int powint(int x, int p)
{
    int y = 1;

    while(p-- > 0)
    {
        y *= x;
    }

    return  y;
}

int main(void)
{
    int n;
    printf("整数を入力してください>>>");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= powint(3, i); j++)
        {
            printf("@");
        }
        printf("\n");
    }

}