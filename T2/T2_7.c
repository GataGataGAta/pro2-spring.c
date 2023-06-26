#include<stdio.h>

int main(void)
{
    int t, j;
    printf("Please enter the number>>>");
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        j = 2 * i - 1;
        printf("%d, ", j);
    }
    printf("\n");

    return 0;

}