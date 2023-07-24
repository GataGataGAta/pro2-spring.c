#include <stdio.h>

int sos(int n)
{
    int sum = 0;
    for (int i = n; i < n + 10; i++)
    {
        sum += i * i;
    }
    return sum;
}

int main()
{
    int t;
    printf("整数を入力してください>>>");
    scanf("%d", &t);

    int i = 1;
    while (sos(i) < t)
    {
        i++;
    }

    printf("t = %d の場合： i = %d，s_%d = %d\n", t, i, i, sos(i));

    return 0;
}
