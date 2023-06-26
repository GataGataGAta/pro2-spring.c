#include<float.h>
#include<limits.h>
#include<stdio.h>

int main(void)
{
    //char型の最大値と最小値
    printf("CHAR型の最大値%d\n", CHAR_MAX);
    printf("CHAR型の最小値%d\n", CHAR_MIN);

    //int型の最大値と最小値
    printf("int型の最大値%d\n", INT_MAX);
    printf("int型の最小値%d\n", INT_MIN);

    //double型
    //％fを用いた表現
    printf("double型の最大値%f\n", DBL_MAX);
    printf("double型の最小値%f\n", DBL_MIN);

    //%eを用いた表現
    printf("double型の最大値%e\n", DBL_MAX);
    printf("double型の最小値%e\n", DBL_MIN);

    //%dを用いた表現(普段は使用禁止)
    printf("double型の最大値%d\n", DBL_MAX);
    printf("double型の最小値%d\n", DBL_MIN);
    

   return 0;

}