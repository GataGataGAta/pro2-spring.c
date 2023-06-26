#include <stdio.h>

void prime_factorization(int n)
{
    int i = 2;
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    printf("\n");
}

int main(void)
{
    int n;
    printf("自然数を入力してください--->");
    scanf("%d", &n);
    printf("%d -> ", n);
    prime_factorization(n);
    return 0;
}