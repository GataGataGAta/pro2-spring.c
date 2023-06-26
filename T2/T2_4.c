 #include <stdio.h>

 int main(void)
 {
    int x;
    printf("数字を入力してください。");
    scanf("%d", &x);

    if( x % 2 == 0 )
        printf("偶数です\n");
    else if( x % 3 == 0 )
        printf("偶数ではないが、3 の倍数です\n");
    else
        printf("偶数でも3の倍数でもありません\n");

    return 0;

 }
 