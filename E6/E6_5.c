#include <float.h>
#include <stdio.h>

#define N 7

int main(void)
{
    int i, n;
    printf("整数を入力してください>>>");
    scanf("%d", &n);

    int score[N] = {80, 70, 45, 90, 50, 95, n};

    int high_score, low_score;

    high_score = 100;
    low_score = 0;

    for(i = 0; i < N; i++)
    {
        if(high_score > score[i])
        {
            high_score = score[i];
        }

        if(low_score < score[i])
        {
            low_score = score[i];
        }
    }
    printf("最低点は%d点\n", high_score);
    printf("最高点は%d点\n", low_score);

    return 0;
   



}