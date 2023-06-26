#include <stdio.h>
#include<string.h>

struct roll
{
    char name[32];    // 名前
    int birth;        // 生年月日
    int zip;          // 郵便番号
    char address[82]; // 住所
    char tel[20];     // 電話番号
} my_data;

int main(void)
{

    // 構造体メンバへのデータの代入
    strcpy(my_data.name, "Hinako"); // 名前
    my_data.birth = 19890225;       // 生年月日
    my_data.zip = 1234567;          // 郵便番号
    strcpy(my_data.address, "Yokohama-shi Kanagawa Pref.");
    // 住所
    strcpy(my_data.tel, "045-123-4567"); // 電話番号

    struct roll *a = &my_data;

    strcpy(a -> name, "Hinako");
    a -> birth = 19090225;
    a -> zip = 1234567;
    strcpy(a -> address, "Yokohama-shi Kanagawa Pref.");
    strcpy(a -> tel, "045-123-4567");

    printf("\nNAME         BIRTHDAY   ZIP      "
           "ADDRESS                      TEL\n");
    printf("%-10.10s%11.8d%10.7d  %-10.30s  %-12.12s\n", a->name, a->birth, a->zip, a->address, a->tel);
}