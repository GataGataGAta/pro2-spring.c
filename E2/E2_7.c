#include<stdio.h>

int main(void)
{
    char x;
    printf("Lower case letter>>>");
    for(x = 65; x <= 90; x++)
    {
        printf("%c", x);

    }
    printf("\n");

    printf("Uppercase letter>>>");
    for(x = 65; x <= 90; x++)
    {
        printf("%c", x+32);

    }
    printf("\n");

    return 0;
     


}