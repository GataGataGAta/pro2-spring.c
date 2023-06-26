#include <stdio.h>

int main(void)
{
    int a;

    printf("入力データは>>>");
    scanf("%d", &a);

    printf("データは");
    if (a % 7 == 0)
    {
        printf("7の倍数です\n");
    }
    else
    {
        printf("7の倍数ではない\n");
    }

    return 0;

}