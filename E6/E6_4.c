#include<stdio.h>

#define N 10

int main(void)
{
    int a[N], b[N];
    int m, n;
    
    printf("整数を入力してください>>>");
    scanf("%d %d", &m, &n);

    for(int i = 0; i < N; i++)
    {
        a[i] = i * i;
        printf("a.%d ", a[i]);
    }
    printf("\n");


    for(int j = 0; j < n - 1; j++)
    {
        b[j] = a[m + j];
        printf("b.%d ", b[j]);
    }
     printf("\n");

    return 0;


}