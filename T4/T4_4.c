#include<stdio.h>

double prod_d( double x, double y)
{
  return x * y;
}

int main(void)
{
    double input1, input2, result;
    printf("Please enter numbers--->");
    scanf("%lf, %lf", &input1, &input2);

    result = prod_d(input1, input2);
    printf("%f X %f = %f\n",input1, input2, result);

}