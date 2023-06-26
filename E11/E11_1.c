#include<stdio.h>

struct date
{
    int y;
    int m;
    int d;
};

typedef struct date date_t;

void print_day2(date_t this_day)
{
    printf("%d年, %d月%d日です。\n", this_day.y, this_day.m, this_day.d);
}


int main(void)
{
    date_t my_day;

    my_day.y = 2023;
    my_day.m = 6;
    my_day.d = 25;

    print_day2( my_day );


}