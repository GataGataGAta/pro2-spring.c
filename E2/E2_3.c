#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, D, x1, x2;

    printf("ax^2+bx+c=0のa b cを入力してください。>>>");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0.0)
    {
        if (b == 0.0)
        {
            printf("係数がおかしい\n");
        }

        else
        {
            x1 = -c / b;
            printf("解は、%gです。\n", x1);
        }
    }
    else
    {
        D = b * b - 4 * a * c;
        if (D > 0)
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            if (x1 > 0 && x2 > 0)
            {
                printf("正の解は2個です。\n");
            }
            else if (x1 > 0 || x2 > 0)
            {
                printf("正の解は1個です。\n");
            }
            else
            {
                printf("正の解は0個です。\n");
            }
        }
        if (D < 0)
        {
            printf("実数解はありません。\n");
        }
    }
    return 0;
}