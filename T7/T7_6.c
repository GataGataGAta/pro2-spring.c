#include <stdio.h>
#include<math.h>

#define M 3

int main ( void )
{
	double a[ M ][ M ];
    double trace = 0.0;  
    double frobenius = 0.0;  

	a[0][0] =  2.5; a[0][1] =  0.0; a[0][2] = -1.0;
	a[1][0] = -1.0; a[1][1] =  1.5; a[1][2] =  0.0;
	a[2][0] =  5.0; a[2][1] =  4.0; a[2][2] =  3.0;

	/* ここで行列のトレースを求める */
    for(int i = 0; i < M; i++)
    {
        trace += a[i][i];
    }

	/* ここで行列のフロベニウスノルムを求める */
    for(int j = 0; j < M; j++)
    {
        for(int p = 0; p < M; p++)
        {
            frobenius += a[j][p] * a[j][p];
        }
    }

	/* トレースとフロベニウスノルムを表示する */
    printf("%1.0f\n", trace);
    printf("%f\n", sqrt(frobenius));

	return 0;
}