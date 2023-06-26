#include<stdio.h>

int main(void)
{
    char c = getchar();
    while(c != EOF)
    {
        if(c>=65 && c<=125)
        {
        putchar(c);
        c = getchar();
        }

        else 
        {
            printf("\n");
            break;
         }
        


    }
    return 0;

}