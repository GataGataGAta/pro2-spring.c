#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
    int i = 0;
    //入力されたコマンドライン引数をint型に変換するための配列
    int b[argc];
    int sum = 0;
    double average;

    if( argc != 5 )
    {
        printf("使い方: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    //コマンドライン引数の数を表示
    printf("%d\n", argc);

    //入力されたコマンドライン引数を表示
    for(i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }

    //argv[n]をint型に変換
    for(i = 0; i < argc; i++)
    {
        b[i] = atoi(argv[i]);
        sum += b[i];
    }

    //平均を計算
    average = sum / (argc - 1);
    printf("平均:%f\n", average);
    

    return 0;
}