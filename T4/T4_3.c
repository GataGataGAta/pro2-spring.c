#include<stdio.h>

int subt( int x )
{
  int y;

  y = x - 5;

  return y;
}

int main(void)
{
    int input, result;
    printf("Please enter the number--->");
    scanf("%d", &input);

    result = subt(input);

    printf("%d\n", result);

    return 0;
}