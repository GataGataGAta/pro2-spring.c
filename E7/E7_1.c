#include<stdio.h>

#define N 20


int main()
{
    int a[N];
    int n;

    printf("Please enter the number>>>");
    scanf("%d", &n);

    a[0] = n;

    for(int i = 1; i < N; i++)
    {
        a[i] = 2 * a[i - 1] + 1;
    }

    for(int j = 0; j < N; j++)
    {
        printf("a[%d] = %d\n",j, a[j]);
    }

}