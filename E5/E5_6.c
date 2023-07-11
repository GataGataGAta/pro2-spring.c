#include <stdio.h>
#include <math.h>

// 判別式を計算する関数
int discriminant(int a, int b, int c)
{
    return b * b - 4 * a * c;
}

// 実数解のうち大きい方を求める関数
double quad_eq(int a, int b, int d)
{
    // 二次方程式の解を計算する
    double x1 = (-b + sqrt(d)) / (2.0 * a);
    double x2 = (-b - sqrt(d)) / (2.0 * a);

    // x1とx2の大きい方を返す
    if(x1 > x2)
    return x1;

    else
    return x2;
}

int main()
{
    int a, b, c;

    printf("方程式のa,b,cを入力してください。 ax^2 + bx + c = 0:\n");
    scanf("%d%d%d", &a, &b, &c);

    int d = discriminant(a, b, c);
    if (d > 0)
    {
        printf("2個の実数解のうち大きい方は x = %f です\n", quad_eq(a, b, d));
    }
    else if (d == 0)
    {
        printf("重解は x = %f です\n", quad_eq(a, b, d));
    }
    else
    {
        printf("実数解はありません\n");
    }

    return 0;
}
