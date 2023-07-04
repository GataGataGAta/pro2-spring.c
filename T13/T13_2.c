#include<stdio.h>

int main(void)
{
    int j, n, t = 0;
    printf("整数を入力してください>>>");
    scanf("%d", &n);

    for(j = 0;; j++)
    {
        t += j * j * j;
        if(t >= n)
        {
            break;
        }
    }   

    printf("%d %d\n", j, t);
}
