#include<stdio.h>

int main(void)
{
    int x;
    printf("Please enter the number>>>");
    scanf("%d", &x);

    if(x>100)
    {
        printf("big number\n");
    }
    else if(x % 2 == 0)
    {
        printf("small even number\n");
    }
    else
    {
        printf("small odd number\n");
    }
}