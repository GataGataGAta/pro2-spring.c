#include<stdio.h>
#include<time.h>
#include<stdlib.h>

typedef struct
{
    int number;
    int open;
}cell_t;

cell_t bingo_card[5][5];

void init_card()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            bingo_card[j][i].number = 15 * i + 1 +rand() % 15;
            bingo_card[i][j].open = 0;
        }
    }
    bingo_card[2][2].number = 0; // center cell
}

void print_card()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%2d  ", bingo_card[i][j].number);
        }
        printf("\n");
    }
}

int drawed_ball[75]; // I just assumed maximum 75 balls to be drawn

void draw_ball()
{
    int a;
    a = 1 + rand() % 75;
    printf("番号は、%d!\n", a);
}

int main(void)
{
    srand((unsigned int)time(NULL)); // initialize random seed

    init_card();
    printf("\n");
    print_card();
    draw_ball();

    return 0;
}
