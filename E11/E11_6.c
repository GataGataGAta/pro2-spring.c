#include <stdio.h>
#include <string.h>

#define N 13

struct jugyo
{
    char dow[4]; //曜日（day of week）
    int tp; //時限（time period）
    char subject[30]; //授業名
    int build; //建物(号館)
    int room; //教室
};

typedef struct jugyo jugyo_t;

void print_class( jugyo_t a )
{
    printf("曜日: %s\n", a.dow);
    printf("時限: %d\n", a.tp);
    printf("授業名: %s\n", a.subject);
    printf("建物: %d号館\n", a.build);
    printf("教室: %d号室\n", a.room);
    printf("\n"); 
}

void get_line( char buff[], int size )
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

int main ( void )
{
    int i;
    char str[ 4 ];

    jugyo_t class[ N ] = {
        { "Thu", 5, "English Communication", 4, 104 },
        { "Wed", 1, "Database", 6, 201 },
    	{ "Fri", 5, "Operating System", 8, 401 },
    	{ "Mon", 4, "English Writing", 4, 102 },
    	{ "Tue", 1, "Programming II", 4, 405 },
    	{ "Tue", 2, "Programming II", 4, 405 },
    	{ "Fri", 3, "Sensing", 4, 402 },
    	{ "Mon", 1, "Probability and Statistics", 4, 402 },
    	{ "Tue", 3, "English Reading", 4, 204 },
    	{ "Thu", 4, "Applied Calculus", 8, 302 },
    	{ "Mon", 2, "Information Theory", 6, 201 },
    	{ "Fri", 1, "Applied Linear Algebra", 8, 305 },
    	{ "Tue", 4, "Signals and Systems", 4, 402 },
    };

    printf("曜日を入力してください(英語三文字):");
    get_line( str, 4 );

    for(i = 0; i < N; i++)
    {
        if(strcmp(class[i].dow, str) == 0)
        {
            print_class( class[i] );
        }
    }

	return 0;
}