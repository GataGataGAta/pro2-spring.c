#include<stdio.h>
#include<string.h>

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
    char str[256];
    printf("文字列を入力してください >>> ");
    get_line(str, 256);

    int i = 0;
    int large = 0;
    int small = 0;
    int number = 0;
    int others = 0;

    while(1)
    {
        if(str[i] != '\0')
        {
            if(str[i] >= 65 && str[i] <= 90)
            large++;

            else if(str[i] >= 97 && str[i] <= 122)
            small++;

            else if(str[i] >= 48 && str[i] <= 57)
            number++;

            else
            others++;
        }
        i++;

        if(str[i] == '\0')
        {
            break;
        }
    }


    printf("文字数=%lu\n", strlen(str));
    printf("入力された文字列=%s\n", str);
    printf("大文字=%d, 小文字=%d, 数字=%d, その他=%d\n", large, small, number, others);


}