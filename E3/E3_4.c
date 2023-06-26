#include<stdio.h>

int main(void)
{
    int charge = 5000;
    int days = 0;
    printf("チャージ額:%d円\n", charge);

    while(charge > 390)
    {
        days++;
        charge = charge - 390;
        printf("%d日目残高 %d円\n", days, charge);

        //1000円を下回ったときに警告を表示。
        if(charge < 1000)
        {
            printf("残高が1000円を切りました。チャージしてください。\n");
        }
        
    }
}