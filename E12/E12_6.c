#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//サイコロの部分をコーディング
double dice(int i)
{
    int a, j;
    double sum = 0.0;
    double average = 0.0;

    srand((unsigned int)time(NULL));
    for (j = 0;j < i; j++)
    {
        a = 1 + rand() % 6;
        sum += a;
        //printf("%2d回目: %2d\n",j, a); 
    }
    //printf("\n");

    //平均を出力
    average = sum / i; 
    //printf("平均%f\n", average);

    return average;
}

double dice_average(int i)
{
    int j, a;
    double sum = 0.0;
    srand((unsigned int)time(NULL));
    for (j = 0;j < i; j++)
    {
        a = 1 + rand() % 6;
        sum += a * a;
    }

    return sum / i;

}

int main(void)
{
    double a = 0.0;
    double b = 0.0;
    int N = 10000;
    int M = 1000000;

    for(int i = 0; i < M ; i++)
    {
        a += dice( N );
    }
    
    for(int j = 0; j < M; j++)
    {
        b += dice_average( N ) - dice( N );
    }

    printf("N = %d 標本平均の平均:%lf\n",N, a / M);
    printf("N = %d 標本平均の分散:%lf\n",N, b / M) ;

}