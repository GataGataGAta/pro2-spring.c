#include <stdio.h>
#include<math.h>

#define FULL 10
#define N 50  /*  使用しない場合は削除すること */

int main ( void ) 
{
    int i;
	int freq[ FULL+1 ] = { 1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4 };    /* 点数が i である学生の人数を格納する配列 freq */
    double sum = 0.0;
    for(i = 0; i < FULL + 1; i++)
    {
        sum += i * freq[i];
    }

    double Av = sum / N;

    sum = 0.0;
    for(i = 0; i < FULL + 1; i++)
    {
        sum += (i - Av) * (i - Av) * freq[i];
    }

    double BS = sum / N;
    double HH = sqrt(BS);
    printf("平均:%3.2f\n", Av);
    printf("分散:%3.2f\n", BS);
    printf("標準偏差:%3.2f\n", HH);

    for(i = 0; i < FULL + 1; i++)
    {
        double HE = 10 * (i - Av) / HH + 50;
        printf("%d点の人の偏差値は%3.2f\n", i, HE);
    }

	return 0;

}