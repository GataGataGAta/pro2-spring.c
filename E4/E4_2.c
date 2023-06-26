#include<stdio.h>

int polynomial(int x)
{
    return 2 * x * x - 5 * x + 3;
}

int main(void)
{
    int a, b, f;
    printf("Please enter the number--->");
    scanf("%d", &a);

    for(b = 0; b <= a; b++)
    {
        f = polynomial(b);
        printf("f(%d)=%d\n",b, f);

    }

}