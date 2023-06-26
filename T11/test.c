#include<stdio.h>

#define BUS_NUM 7

int BusHM[BUS_NUM][2] = 
{
    {13, 40},
    {15, 20},
    {15, 30},
    {16, 20},
    {17, 10},
    {18, 55},
    {20, 30}
};

int BusT[BUS_NUM];

int hm2t(int hour, int minute)
{
    return hour * 60 + minute;
}

void t2hm(int time, int *hour, int *minute)
{
    *hour = time / 60;
    *minute = time - *hour * 60;
}

int main(void)
{
    int i, hour, minute, dtime, dhour, dminute;

    printf("何時に出発しますか？\n");
    scanf("%d", &hour);
    printf("何分に出発しますか？\n");
    scanf("%d", &minute);

    dtime = hm2t(hour, minute);
    

    if(dtime < 770)
    {
        printf("二限は終わりましたか？\n");
    }

    else
    {
        for(i = 0; i < BUS_NUM; i++)
        {
            BusT[i] = hm2t(BusHM[i][0], BusHM[i][1]);
            if(BusT[i] > dtime)
            break;
        }
        t2hm(BusT[i], &hour, &dminute);
        printf("%d時%d分に発車します。\n", hour, dminute);
    }

    return 0;
}
