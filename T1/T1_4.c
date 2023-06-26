#include <stdio.h>

int main(void)
{
    int i,j,n;
    i=5;
    n=i+j;//jは未定義、未定義な値を引用している
    printf("n=%d\n", n);

    return 0;


}