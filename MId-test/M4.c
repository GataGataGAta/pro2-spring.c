#include<stdio.h>
#include<string.h>

int date(int y, int m , int d)
{
    int ymd = 0;
    ymd = y * 10000 + m * 100 + d;
    return ymd;
}

int get_nengou(int ymd)
{
    int nengou = 0;
    if(ymd >= 19120101 && ymd < 19260101)
    {
        nengou = 1;
    }

    if(ymd >= 19260101 && ymd <19890101)
    {
        nengou = 2;
    }

    if(ymd >= 19890101 && ymd <20190101)
    {
        nengou = 3;
    }

    if(ymd >= 20190101)
    {
        nengou = 4;
    }

    return nengou; 
}

int main(void)
{
    int y, m, d, i;
    printf("年号、月、日にちを入力してください>>>");
    scanf("%d %d %d", &y, &m, &d);
    i = date(y, m, d);

    printf("%d\n",i);
    printf("get_nengou(ymd) = %d\n", get_nengou(i));

    if(get_nengou(i) == 1)
     printf("%d年%d月%d日は大正です。\n", y, m, d);

    if(get_nengou(i) == 2)
     printf("%d年%d月%d日は昭和です。\n", y, m, d);

    if(get_nengou(i) == 3)
     printf("%d年%d月%d日は平成です。\n", y, m, d);

    if(get_nengou(i) == 4)
     printf("%d年%d月%d日は令和です。\n", y, m, d);

    return 0;
}