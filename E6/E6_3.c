#include<stdio.h>

#define N 5

int main(void)
{
    int inv[N];
    int a[N];

    for(int i = 0; i < N; i++)
    {
        a[i] = (i + 1) * (i + 1);
        printf("%d ", a[i]);
    }
    printf("\n");

    for(int j = N; j > 0; j--)
    {
        inv[N - j] = j * j;
        printf("%d ", inv[N - j]);
    }
    printf("\n");

}