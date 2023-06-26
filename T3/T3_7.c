#include<stdio.h>

int main(void)
{
    int i,j;
    
    for(i = 0; i < 10; i++)
    {

        for(j = i + 1; j <= 10; j++)
        {
            printf("(%d,%d)",i, j);
        }
        printf("\n");

        

    }
}