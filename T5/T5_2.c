#include <stdio.h>
#include <math.h>

double decimal(double a);

int main(void)
{
    int b;
    printf("Please enter the number--->");
    scanf("%d", &b);

    for (int x = 1; x < b; x++)
    {
        printf("log(%d)の少数部は%f\n", x, decimal(log((double)x)));
    }
}

double decimal(double a)
{
    int int_part = (int)a;
    double decimal_part = a - int_part;
    return decimal_part;
}