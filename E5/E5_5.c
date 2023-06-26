#include <math.h>
#include <stdio.h>

double mycbrt(double x);                   

int main(void)
{
    double x;

    printf("   x           r       r * r * r\n");   
    for (x = 1.0; x <= 10.0; x += 1.0)           
    {
        printf("%4.1f  %13.10f  %13.10f\n", x, mycbrt(x), mycbrt(x) * mycbrt(x) * mycbrt(x));
    }

    return 0;
}

double mycbrt(double x)                   
{
    const double eps = 1.0e-10;            
    double guess = 1.0;                    

    while (fabs(guess * guess * guess - x) >= eps) 
    {
        guess = (2.0 * guess + x / (guess * guess)) / 3.0; 
    }

    return guess;                          
}