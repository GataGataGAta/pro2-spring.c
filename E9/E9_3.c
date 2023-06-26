#include <stdio.h>       // 実際に動くswap関数の例

void sort2(int *a, int *b);

int main(void)
{
    int x, y;

    printf("整数を入力してください>>>");
    scanf("%d %d", &x, &y);

    sort2(&x, &y);  
          
    printf("x=%d\ty=%d\n", x, y); // 印字

    return 0;
}

void sort2(int *a, int *b)
{
    int c;
    if(*a >= *b)
    {
        c = *b;
        *b = *a;
        *a = c;
    }

}