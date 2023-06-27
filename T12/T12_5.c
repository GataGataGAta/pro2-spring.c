#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
        int i;

        int a;
        srand((unsigned int)time(NULL));

        for (i = 1;i < 11;i++)
        {
            a = 1 + rand() % 6;
            printf("%2d回目: %2d\n",i, a); 
        }

        return 0;
}
