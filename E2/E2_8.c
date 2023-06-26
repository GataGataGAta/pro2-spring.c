#include <math.h>
#include <stdio.h>

int main(void)
{
    int t;
    double sine, cosine;

    printf("三角関数\n");
    printf("  t      sin     cos\n");
    for (t = 0; t <= 90; t++)
    {
        double rad = (t * 3.1415926) / 180.0;
        double sine = sin(rad);
        double cosine = cos(rad);

        if (t % 15 == 0)
        {
            printf(" %3.1d   %6.4f   %6.4f\n", t, sine, cosine);
        }
    }

    return 0;
}