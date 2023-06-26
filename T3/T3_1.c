#include<stdio.h>
#include<math.h>

int main(void)
{
    int i = 1;
    int n,m;

    printf("整数を入力してください。\n");
    scanf("%d %d",&n, &m);

    printf("    逆数     二乗     平方根     自然対数\n");
    printf("---------------------------\n");

    while(n <= m)
    {
        double Nvalue = n;
        double a = 1 / Nvalue;
        double b = Nvalue * Nvalue;
        double c = sqrt(Nvalue);
        double d = log(Nvalue);
        printf("%5.1f  %5.3f  %6.1f  %6.4f  %6.4f\n", Nvalue, a ,b ,c, d);
        n++;

    }

    return 0;



}
