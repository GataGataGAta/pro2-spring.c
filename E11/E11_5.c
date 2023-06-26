#include<stdio.h>

#define N 12

typedef struct NPB npb_t;

struct NPB
{
    char name[ 15 ];//球団名
    double wp;//勝率 (winning percentage)
    int win;//勝利数
    int lose;//敗戦数
    int tie;//引き分け数
};

void win_p( npb_t *a)
{
    a->wp = (double)a->win / ((double)a->win + (double)a->lose);
}

void print_npb( npb_t a )
{
    printf("球団名: %s\n", a.name);
    printf("勝率: %lf\n", a.wp);
    printf("勝利数: %d\n", a.win);
    printf("敗戦数: %d\n", a.lose);
    printf("引き分け数: %d\n", a.tie);
}

int main(void)
{
    int top = 0;
    npb_t team[ N ] = {
    { "Bay Stars", 0.0,  9,  7, 2 },
    { "Buffaloes", 0.0,  8,  9, 1 },
    { "Carp", 0.0,  5, 12, 1 },
    { "Dragons", 0.0,  6, 12, 0 },
    { "Fighters", 0.0,  7, 11, 0 },
    { "Giants", 0.0,  7, 10, 1 },
    { "Golden Eagles", 0.0,  9,  9, 0 },
    { "Hawks", 0.0, 10,  7, 1 },
    { "Lions", 0.0,  9,  8, 1 },
    { "Marines", 0.0, 10,  8, 0 },
    { "Swallows", 0.0, 12,  5, 1 },
    { "Tigers", 0.0, 12,  6, 0 },
    };

    for(int i = 0; i < N; i++)
    {
        win_p( &team[i] );
        if(team[i].wp > team[top].wp)
        {
            top = i;
        }
    }
    print_npb( team[top] );
}
