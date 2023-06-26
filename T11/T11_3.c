#include<stdio.h>
#include<string.h>

struct jugyo
{
    char dow[4]; 
    int tp; 
    char subject[30];
    int build; 
    int room;
}; 

void print_class(struct jugyo a)
{
    printf("曜日:%s\n", a.dow);
    printf("時限:%d\n", a.tp);
    printf("授業名:%s\n", a.subject);
    printf("号館:%d\n", a.build);
    printf("実施教室:%d\n", a.room);
}

int main(void)
{
    struct jugyo myclass;
    struct jugyo yourclass;

    strcpy(myclass.dow, "Mon\0");
    myclass.tp = 2;
    strcpy(myclass.subject, "Infomation Theory\0");
    myclass.build = 6;
    myclass.room = 201;

    print_class( myclass );

    yourclass = myclass;
    
    printf("\n");
    print_class( yourclass );
}