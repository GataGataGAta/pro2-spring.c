#include<stdio.h>

int main(void)
{
    int amount, period;
    int i;
    printf("現在の所持金と、何日後にお金がもらえるか入力してください>>>");
    scanf("%d %d", &amount, &period);

    for(i = period; i >= 0; i--)
    {
        if(amount >= 350)
        {
            amount = amount - 350;
        }

        printf("あと%2d日、 残高は%2d円\n", i, amount);
    }
}