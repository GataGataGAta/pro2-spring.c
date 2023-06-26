#include<stdio.h>

double pyramid(int t, int h)
{
    return (double)t * (double)t * (double)h / 3;
}

int main(void)
{
    int i;
    double m;
    printf(" i   pyramid\n");
    for(i = 5; i <= 10; i++)
    {
        m = pyramid(i, i+2);
        printf("%2d  %f\n",i, m);
    }
}