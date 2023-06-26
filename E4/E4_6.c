#include<stdio.h>

int sum_by_formula( double n )
{
  return (( n + 1 ) / 2) * n;    
}

int sum_by_roop( int n )
{
    int total = 0;
    for(int i = 0; i <= n; i++)
    {
        total = total + i;
    }

    return total;
}

int main(void)
{
    int input;
    printf("正数を入力してください。--->");
    scanf("%d", &input);

    printf("%d\n", sum_by_formula(input));
    printf("%d\n", sum_by_roop(input));

    return 0;
}