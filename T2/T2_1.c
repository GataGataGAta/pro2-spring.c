#include<stdio.h>

int main(void)
{
    int x;
    printf("年齢を入力してください。");

    scanf("%d", &x);

    if(x>=100||x<0){
        printf("0から99までの数字を入力してください。\n");
    }
    else {        
    if(x == 20)
        printf("はたちです。\n");
    if(x != 60)
        printf("還暦ではありません\n"); 
    if(x >= 25)
        printf("被選挙権があります。\n");
    if(x < 18)
        printf("未成年です\n");

    }


    

}