#include <stdio.h>

// 副読本「キックオフ C言語」， p. 154 より抜粋

int str_compare(char s1[], char s2[])
{

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        int diff = (unsigned char)s1[i] - (unsigned char)s2[i];
        if (diff != 0)
        {
        return diff;
        //printf("%d", diff);
        }
    }
    return 0;
}

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

    int result = str_compare(txt1, txt2);
    //printf("%d\n", result);

    if (result == 0)
    {
        printf("%s\n", txt1);
    }

    else if (result > 0)
    {
        printf("%s, %s\n", txt2, txt1);
    }

    else 
    {
        printf("%s, %s\n", txt1, txt2);
    }

    return 0;
}