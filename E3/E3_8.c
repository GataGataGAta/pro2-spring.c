#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, n;
    int count = 0;
    printf("整数を入力してください--->");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            for (c = b + 1; c <= n; c++)
            {
                if ((a * a) + (b * b) == (c * c))
                {
                    count++;
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);
                }
            }
        }
    }
    printf("a^2 + b^2 = c^2、a < b を満たすような %d 以下の正の整数の組は %d 個あります。\n", n, count);

    return 0;
}
