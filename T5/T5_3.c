#include<stdio.h>
#include<math.h>

double deg_to_rad( int x );
double func_sin( int x );

int main(void)
{
    int a;
    printf("Please enter the number--->");
    scanf("%d", &a);

    for(int i = 1; i <= 10; i++)
    {
        printf("sin( %d [deg] )=%f\n",a * i, func_sin(a * i));
    }


}

double deg_to_rad( int x )
{
  return x * M_PI / 180.0;
}

double func_sin( int x )
{
    double c = deg_to_rad(x);
    return sin(c);
}

