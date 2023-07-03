#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val;
    int sum = 0;
    int cnt;
    FILE *fp, *outdata, *result;
    int max = 0;
    int min = 256;

    if ((fp = fopen("indata.txt", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- indata.txt\n");
        exit(EXIT_FAILURE);
    }
    
    outdata = fopen("outdata.txt", "w");
    result = fopen("result.txt", "w");

    for (cnt = 0; fscanf(fp, "%d", &val) != EOF; cnt++) // データの入力
    {
        fprintf(outdata, "%d\n", val);
        sum += val;
        if(max < val)
        {
            max = val;
        }

        if(min > val)
        {
            min = val;
        }
    }

    if (cnt > 0) // 合計・平均値・最大値・最小値の書き出し
    {
        fprintf(result, "合計=%d 平均値=%g 最大値:%d 最小値:%d %d\n", sum, (double)sum / cnt, max, min, cnt);
    }

    fclose(fp); // ファイルのクローズ
    fclose(outdata);
    fclose(result);

    return EXIT_SUCCESS;
}
