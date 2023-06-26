#include<stdio.h>
#include<math.h>

double area(double r)
{
    return r * r * M_PI;
}

int main(void)
{
    double a, result;
    printf("Please enter the number--->");
    scanf("%lf", &a);

    result = area(a);
    printf("半径%f 面積%f\n", a, result);


}