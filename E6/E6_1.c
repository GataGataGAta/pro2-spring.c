#include<stdio.h>

#define N 10

int main(void)
{
    int array[N];
    int m, n;
    for(int i = 0; i < 10; i++)
    {
        array[i] = 2 * (i + 1);
    }



    printf("数値を二つ入力してください>>>");
    scanf("%d, %d", &m, &n);
    if(1 >= m || m > n || n >= N)
    {
        printf("整数の条件は1 <= m < n <= Nです");
    }

    else
    {
        int tmp;
        tmp = array[m - 1];
        array[m - 1] = array[n - 1];
        array[n - 1] = tmp;
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", array[j]);
        }
        printf("\n");
    }


}