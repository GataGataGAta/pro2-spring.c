#include<stdio.h>
#include<math.h>

double area(double r, int a)
{
    return (r * r * M_PI) * (double)a / 360;
}

int main(void)
{
    double x, z;
    int y;
    printf("Please enter numbers--->");
    scanf("%lf, %d",&x, &y);
    if(y >= 360)
    {

    }

    else
    {
    z = area(x,y);
    printf("%lf\n", z);
    }

}