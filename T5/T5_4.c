#include<stdio.h>
#include<math.h>

double squrt_sum(double x, double y);
double distance(double x1, double y1, double x2, double y2);

int main(void)
{
    int a, b, c, d;
    printf("Please enter numbers--->");
    scanf("%d %d", &a, &b);

    c = distance(10, 0, a, b);
    d = distance(0, 10, a, b);

    //printf("%d, %d", c, d);

    if(c < d)
    {
        printf("点(10,0)により近い\n");
    }

    else if(d < c)
    {
        printf("点(0,10)により近い\n");
    }

    else
    {
        printf("同値\n");
    }

    return 0;

}

double squrt_sum(double x, double y)
{
    return sqrt(x * x + y * y);
}

double distance(double x1, double y1, double x2, double y2)
{
    return squrt_sum((x1-x2) * (x1-x2), (y1-y2) * (y1-y2));
}