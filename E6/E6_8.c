#include<stdio.h>
#include<math.h>

#define N 12

int main(void)
{
    int m, d;
    int days = 0;
    int mounth[N] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("整数を入力してください>>>");
    scanf("%d, %d", &m, &d);

     for(int i = 0; i < m - 1; i++)
    {
        days += mounth[i];
    }
    days = days + d;

    printf("%d月%d日は1/1から%d日です。\n",m, d, days);




}

