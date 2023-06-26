#include<stdio.h>

int main(void)
{
    int max,i;
    int total = 0;
    printf("整数を入力してください---->");
    scanf("%d", &max);
    i = 1;

    while(i <=max)
    {
       if(i%3==0 || i%5==0)
       {
        printf("%d ",i);
       }
       i++;


    }
    printf("\n");
    return 0;


}