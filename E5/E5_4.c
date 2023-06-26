#include<stdio.h>

int gcd(int a, int b)
{
    int z;

    while ((z = a % b) != 0) 
    {                        
        a = b;               
        b = z;               
    }

    return b;                
}

int main(void)
{
    int s, t, cnt;
    printf("整数を二組入力してください。ただし、s < tとします。>>>");
    scanf("%d %d", &s, &t);

    if(s >= t)
    printf("s < tとなるような整数を入力してください。\n");

   cnt = 0; // 個数をカウントするための int 型変数 cnt を初期化
   for(int x = s; x < t; x++ )
   {
      for(int y = x + 1; y <= t; y++ )
      {
        if(gcd(x, y) == 1)
        { // 2 個の整数の最大公約数が 1 なら
        printf("%d %d\n", x, y);  // ( x, y ) を表示する
        cnt++;
        }  // 個数を表す変数 cnt をインクリメントする
      }
   }
   printf("互いに素なペアは、%d個あります.\n", cnt);// 個数を表示する
}