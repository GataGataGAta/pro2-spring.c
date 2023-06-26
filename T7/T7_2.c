#include<stdio.h>

#define N 10

int main(void)
{
    int freq[N];

    for(int i = 0; i < N; i++)
    {
        freq[i] = 0;
    }

    for(int j = 0; j < 7; j++)
    {
        int a;
        printf("1から9までの数字を入力してください>>>");
        scanf("%d", &a);
        freq[a]++;
    }

    for(int p = 0; p < N; p++)
    {
        printf("%d は %d 個\n", p, freq[p]);
    }

}