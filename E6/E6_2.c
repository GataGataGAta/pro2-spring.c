#include <stdio.h>

#define N 4

int main(void)
{
    int n;
    int a[N] = {3, -2, -1, 1};
    int c;
    int ip = 0;
    printf("整数を入力してください>>>");
    scanf("%d", &n);
    int b[] = {n, n + 1, n + 2, n + 3};

    int sum[] = {3 + n, -2 + (n + 1), -1 + (n + 2), 1 + (n + 3)};

    printf("ベクトルの和は（");
    for (int j = 0; j < 4; j++)
    {
        printf("%d, ", sum[j]);
    }
    printf(" )\n");

    for (int i = 0; i < 4; i++)
    {
        c = b[i] * a[i];
        ip = ip + c;
    }
    printf("内積%d\n", ip);
}