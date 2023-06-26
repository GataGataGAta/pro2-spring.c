#include<stdio.h>

void draw_box1(int x);
void draw_box2(int x);

int main(void)
{
    int a = 4;
    int b = 5;
    for(int p = 0; p <= a; p++)
    {
    draw_box1(a);
    draw_box2(b);
    }


}

void draw_box1(int x)
{
    for(int i = 1; i <= x; i++)
    {
        printf("◽️");
        //printf("◼️");
    }
    //printf("\n");
}

void draw_box2(int x)
{
    for(int j = 5; j >= x; j--)
    {
        printf("◼️");
    }
    printf("\n");
}