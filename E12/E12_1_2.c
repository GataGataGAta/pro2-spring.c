#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int val;
    int sum = 0;
    int cnt;
    FILE *fp, *outdata, *result;
    int max = 0;
    int min = 256;

    if (argc != 2)
    {
        printf("使い方: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    outdata = fopen("outdata.txt", "w");
    result = fopen("result.txt", "w");

    for (cnt = 0; fscanf(fp, "%d", &val) != EOF; cnt++) // データの入力
    {
        fprintf(outdata, "%d\n", val);
        sum += val;
        if (max < val)
        {
            max = val;
        }

        if (min > val)
        {
            min = val;
        }
    }

    if (cnt > 0) // 合計・平均値・最大値・最小値の書き出し
    {
        fprintf(result, "合計=%d 平均値=%g 最大値:%d 最小値:%d\n", sum, (double)sum / cnt, max, min);
    }

    fclose(fp); // ファイルのクローズ
    fclose(outdata);
    fclose(result);

    return EXIT_SUCCESS;
}
