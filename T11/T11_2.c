#include <stdio.h>
#include <string.h>

  /* ここで構造体を宣言せよ */
struct date
{
    int y;
    int m;
    int d;
};

void print_day( struct date hiduke )
{

  /* ここにプログラムを追加せよ */
  printf("%d年、%d月%d日\n",hiduke.y, hiduke.m, hiduke.d);
  
}

int main(void)
{

  /* ここにプログラムを追加せよ */
  struct date my_day;

  my_day.y = 2023;
  my_day.m = 6;
  my_day.d = 20;

  print_day( my_day );

  return 0;
  
}