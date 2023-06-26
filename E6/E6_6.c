#include<stdio.h>
#include<math.h>

#define N 7

int main(void)
{
    int i, n;
    double m, v, s, sum;
    printf("整数を入力してください>>>");
    scanf("%d", &n);

    int score[N]= { 80, 70, 45, 90, 50, 95, n };

    for(sum = 0.0, i = 0; i < N; i++)
    {
        sum += score[i];
    }
    m = 0;
    m = sum / N;

    for(sum = 0.0, i = 0; i < N; i++)
    {
        sum += (score[i] - m) * (score[i] - m);
    }
    v = 0;
    s = 0;
    v = sum / N;
    s = sqrt(v);

    printf("平均 = %10.3f\n", m);
    printf("分散 = %10.3f\n", v);
    printf("標準偏差 = %10.3f\n", s);

    return 0;
    

}