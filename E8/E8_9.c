#include <stdio.h>
#include <string.h>

void str_reverse_copy(char dst[], char src[])
{
    int len = strlen(src);
    for (int i = 0; i < len; i++)
    {
        dst[i] = src[len - i - 1];
    }
    dst[len] = '\0';
    printf("%sを逆にすると%s\n", src, dst);
}

int main(void)
{
    char src[256];
    char dst[256];

    printf("文字列を入力してください：");
    fgets(src, sizeof(src), stdin); 

    str_reverse_copy(dst, src);

    return 0;
}
