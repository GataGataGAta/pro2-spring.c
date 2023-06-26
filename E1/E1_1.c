#include <stdio.h>

int main(void)
{
    int d;//新しく日にちを追加
    int h;
    int m;
    int s;
    int t;

    d=5;
    h=22;
    m=54;
    s=41;
    t=86400*d+3600*h+60*m+s;
    printf("%d日%d時間%d分%d秒は%d秒です。\n",d,h,m,s,t);

    return 0;
    
}