#include<stdio.h>

int powint(int x, int p)
{
    int y = 1;

    while(p--> 0)
    {
        y = x * x * x;

    }

    return y;

}

int main(void)
{
    int i, j;

    for(i = 1; i <= 10; i++)
    {
        j = powint(i, i);
        printf("%d\t%d\n",i ,j);
    }
    return 0;


}