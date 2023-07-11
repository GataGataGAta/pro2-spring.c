#include <stdio.h>

int recurrence(int x, int n) // 第 i 項を表す変数 x と，第 i+1 項を表す変数 y を定義
{
    return 2 * x - n * n;
}

int main(void)
{
    int x, i;
    printf("整数を入力してください>>>");
    scanf("%d", &x); // キーボードから受け取った整数を変数 x に代入

    // 第 0 項を表示
    printf("a_%d = %d\n", 0, x);
    for (i = 0; i < 9; i++)
    {
        // 第 i 項の値 x と i を関数に渡し，戻り値を 第 (i+1) 項を表す変数 y に代入
        int y = recurrence(x, i); 

        // 第 (i+1) 項を表示
        printf("a_%d = %d\n", i + 1, y);

        // 第 (i+1) 項を表す変数の値 y  を 第 i 項を表す変数 x に代入
        x = y;
    }
}
