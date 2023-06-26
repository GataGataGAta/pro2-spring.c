#include <stdio.h>


struct point {
  int x;
  int y;
};

void my_func(struct point *p)
{
  (*p).x += 5;
  p->y += 5;
}

int main(void)
{
  struct point p;

  p.x = 1;
  p.y = 2;

  my_func(&p);

  printf("x = %d,  y = %d\n", p.x, p.y);

  return 0;
}