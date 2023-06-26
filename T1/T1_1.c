#include<stdio.h>

int main(void)
{
    int a,b,result;

    a=1985;
    b=2003;

    result = a + b;
    printf("%d + %d = %d\n", a, b, result);
    
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);

    return 0 ;

}