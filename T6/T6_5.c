#include <float.h>
#include <stdio.h>

int main(void)
{
    double fastest_sec, latest_sec;
    double sec[5];
    sec[0] = 7.2;
    sec[1] = 6.7;
    sec[2] = 8.3;
    sec[3] = 6.9;
    sec[4] = 7.7;

    fastest_sec = 15.0;
    latest_sec = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", sec[i]);

        if (fastest_sec >= sec[i])
        {
            fastest_sec = sec[i];
        }

        if (latest_sec <= sec[i])
        {
            latest_sec = sec[i];
        }
    }
    printf("\n");;

    printf("%f\n", fastest_sec);
    printf("%f\n", latest_sec);
}