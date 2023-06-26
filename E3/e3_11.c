#include <stdio.h>

int main(void)
{
    char s, t;
    int n, m, c, d; 
    printf("s, t = ");
    scanf("%c %c", &s, &t);
    printf("n, m = ");
    scanf("%d %d", &n, &m);

    for (c = 0; c < n; c++)
    {
        for(d = 0; d < m / 2; d++)
        {
            if(c % 2 == 0)
            {
            printf("%c", s);
            printf("%c", t);
            }

            if(c % 2 == 1)
            {
            printf("%c", t);
            printf("%c", s); 
            }
        }
        
            if(c % 2 == 0)
            {
            printf("%c\n", s);
            }

            if(c % 2 == 1)
            {
            printf("%c\n", t);
            }
    }

       
}