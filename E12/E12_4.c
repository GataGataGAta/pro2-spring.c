#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

struct student_data
{
    int id;
    int val;
};

typedef struct student_data student_t;

int main(void)
{
    int i, j;
    FILE *sc;
    student_t tmp;
    student_t s[30];
    char buffer[BUFFER_SIZE];

    if ((sc = fopen("score.txt", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- score.txt\n");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < 30 && fgets(buffer, BUFFER_SIZE, sc) != NULL; i++)
    {
        sscanf(buffer, "%d %d", &s[i].id, &s[i].val);
    }
    fclose(sc); //ファイルをクローズ

    for (i = 0; i < 30; i++) {
        for (j = i + 1; j < 30; j++) {
            if (s[i].val < s[j].val) {
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

    for (i = 0; i < 30; i++) {
        printf("%2d位 ID: %d, Score: %d\n",i + 1, s[i].id, s[i].val);
    }

    return 0;
}
