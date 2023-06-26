#include <stdio.h>

#define M 5
#define N 4

int main( void )
{
	int i, j;
	double sum;
	double average;
        // 使用しない変数は消去すること

	int a[ M ][ N ] = { { 70,  85,  70, 100 }, 
	                    { 60,  30,  40,  50 }, 
	                    { 50,  60,  70,  45 }, 
	                    { 80, 100,  90,  85 }, 
	                    { 75,  90,  55,  80 }, 
	};

     //学生の成績を計算
    for(i = 0; i < M; i++)
    {
        sum = 0;
        average = 0;
        for(j = 0; j < N; j++)
        {
            sum += a[i][j];
        }
        average = sum / N;
        printf("学生%1dの平均点 %f \n",i, average);
       
    }
    printf("\n");

    //試験の平均を計算
    for(int k = 0; k < N; k++)
    {
        sum = 0;
        average = 0;
        for(int p = 0; p < M; p++)
        {
            sum += a[p][k];
        }
        average = sum / M;
        printf("%d回目の試験の平均点 %f \n",k, average);

    }
    
    return 0;
}
