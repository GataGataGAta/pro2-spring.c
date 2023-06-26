#include <stdio.h>

int main( void )
{
  int i, j;
  int a[4];
  a[0] = 100;
  a[1] = 101;
  a[2] = 102;
  a[3] = 103;

  printf("%p\n", &i);
  printf("\n");
  
  for(j = 0; j < 4; j++)
  printf("%p\n", &a[j]);
  printf("\n");

  for(j = 0; j < 4; j++)
  printf("%p\n", a + j);
  printf("\n");

  printf("%d\n", i);
  printf("\n");

  for(j = 0; j < 4; j++)
  printf("%d\n", a[j]);
  printf("\n");

  for(j = 0; j < 4; j++)
  printf("%d\n", *(a + j));

  return 0;
}