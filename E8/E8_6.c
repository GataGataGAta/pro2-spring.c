#include <stdio.h>

void str_cpy(char dst[], char src[])
{
    int i = 0;
    while (1)
    {
        dst[i] = src[i];
        if (src[i] == '\0')
        {
            return;
        }
        i++;
    }
}

int main(void)
{
    //char str1[] = "dog";
    char str2[] = "cat";
    char str3[] = "wolf";

    printf("コピー前：str2 = %s, str3 = %s\n", str2, str3);

    str_cpy(str3, str2);

    printf("コピー後：str2 = %s, str3 = %s\n", str2, str3);

    return 0;
}