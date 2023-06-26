#include<stdio.h>

void print_int(int x)
{
    printf("your number is %d \n", x);
}

int main(void)
{
    int i;
    for(i = 0; i <= 10; i++)
    {
        print_int(i);
    }
}