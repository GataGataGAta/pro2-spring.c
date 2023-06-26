#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int bingo_card[5][5];

typedef struct
{
    int number;
    int open;
}cell_t;

void init_card()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            bingo_card[i][j] = 0;
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%2d  ", bingo_card[i][j]);
        }
        printf("\n");
    }
}

void print_card()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        srand((unsigned int)time(NULL));
        for(j = 0; j < 5; j++)
        {
            bingo_card[j][i] = 15 * i + 1 +rand() % 15;
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%2d  ", bingo_card[i][j]);
        }
        printf("\n");
    }

}


int drawed_ball[];

void draw_ball()
{
    int a;
    srand((unsigned int)time(NULL));
    a = 1 + rand() % 75;
    printf("番号は、%d!\n", a);
}

int main(void)
{
    init_card();
    printf("\n");
    print_card();
    draw_ball();
}