#include<stdio.h>

int rise_num(int m)
{
    return m / 3;
}

int salaty(int m, int a)
{
    return a + 10 * rise_num(m);
}

int main(void)
{
    int m;
    printf("please enter the number--->");
    scanf("%d", &m);
    int a;
    for(int i = 1; i <= 20; i++)
    {
        if(i % 3 == 1)
        {
            a = salaty(i, m);
            printf("%dヶ月目の時給は%d円です。\n",i, a);
            printf("%dヶ月目の時給は%d円です。\n",i + 1, a);
            if(i <= 18)
            {
            printf("%dヶ月目の時給は%d円です。\n",i + 2, a);
            }
        }
        
    }
    return 0;
}