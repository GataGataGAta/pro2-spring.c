#include<stdio.h>

int risoku(double a)
{
    return a * 1.05;
}

int main(void)
{
    int n, i, j;
    double m;
    printf("整数を入力してください>>>");
    scanf("%d", &n);

    m = 55555;
    for(i = 1; i <= n; i++)
    {
        j = risoku( m );
        printf("%d年目の口座内の金額は、%d円です。\n",i ,j);
        m = j + 55555;
    }

}