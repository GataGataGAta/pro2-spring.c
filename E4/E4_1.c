#include<stdio.h>

int price(int x)
{
    return x * 100;
}

int main(void)
{
    int num, payment;
    printf("何個購入しますか？--->");
    scanf("%d", &num);

    payment = price(num) + 5;

    printf("合計%d円のお買い上げです。\n", payment);

}