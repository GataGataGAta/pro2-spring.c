#include <stdio.h>

void my_func( int x )
{
  x += 5;
}

int main( void )
{
  int x;

  x = 3;
  
  my_func( x );

  printf(" x = %d \n", x );

  return 0;
}
