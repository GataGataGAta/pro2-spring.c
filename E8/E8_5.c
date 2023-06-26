#include <stdio.h>
#include <string.h>

void get_line(char buff[], int size)
{
    int i, c;

    for (i = 0; i < size - 1; i++)
    {
        c = getchar();
        if (c == EOF || c == '\n') break;
        buff[i] = c;
    }
    buff[i] = '\0';
}

int main(void)
{
    char txt1[256];
    char txt2[256];
    

    printf("文字列１を入力してください >>> ");
    //fgets(txt1, sizeof(txt1), stdin);
    get_line(txt1, 256);

    printf("文字列２を入力してください >>> ");
    //fgets(txt2, sizeof(txt2), stdin);
    get_line(txt2, 256);

    if (strcmp(txt1, txt2) == 0)
    {
        printf("%s\n", txt1);
    }

    else if (strcmp(txt1, txt2) > 0)
    {
        printf("%s, %s\n", txt2, txt1);
    }

    else
    {
        printf("%s, %s\n", txt1, txt2);
    }

    return 0;
}