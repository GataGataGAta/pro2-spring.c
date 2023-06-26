#include<stdio.h>

#define Num_Subjects 5
#define Num_Students 3
int i, j;

int main(void)
{
    int result[Num_Students][Num_Subjects] = {{80, 70, 40, 60, 80},
                                                {50, 90, 60, 40, 30},
                                                {70, 40, 70, 60, 50}};
    

}

void sum(int a[i][j])
{
    int w;
    for(int i = 0; i < Num_Subjects; i++)
    {
        w += a[i][1];
    } 
    printf("%d", w);   
}