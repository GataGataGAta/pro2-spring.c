#include<stdio.h>

int gcd( int x, int y );

int main(void)
{
    int a, b, result;
    printf("Please enter numbers--->");
    scanf("%d %d", &a, &b);

    result = gcd(a, b);
    printf("%dと%dの最大公約数は、%d\n",a, b, result);

    return 0;
}

int gcd( int x, int y)
{
    int z;

    while((z = x % y)!= 0)
    {
        x = y;
        y = z;

    }

    return y;

}


