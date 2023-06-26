#include <float.h>
#include <stdio.h>

int main(void)
{
    double fastest_sec, latest_sec;
    double sec[ ] = {7.2, 6.7, 8.3, 6.9, 7.7};
   
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