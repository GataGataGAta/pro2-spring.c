#include<stdio.h>

#define N 10

typedef struct student student_t;

struct student
{
    int no; //学生番号
    int eng; //英語の点数
    int math; //数学の点数
    int sci; //理科の点数
    int total; //3教科の合計
};

void comp_total( student_t data[N] )
{
    data->total = data->eng + data->math + data->sci;
}

void print_student( student_t a )
{
    printf("学生番号:%d\n", a.no);
    printf("英語の点数:%d\n", a.eng);
    printf("数学の点数:%d\n", a.math);
    printf("理科の点数:%d\n", a.sci);
    printf("三教科の合計:%d\n", a.total);
}


int main(void)
{
    int i, a, b, c, d, e, f;
    int n = 0;
    student_t person[ N ] = {
     { 1005, 86, 75, 92, 0 },
     { 1012, 65, 91, 80, 0 },
     { 1043, 45, 75, 58, 0 },
     { 1173, 97, 75, 82, 0 },
     { 1224, 77, 77, 77, 0 },
     { 1397, 27, 62, 35, 0 },
     { 1500, 58, 85, 62, 0 },
     { 1734, 80, 52, 46, 0 },
     { 1888, 98, 93, 96, 0 },
     { 1920, 60, 60, 60, 0 },
    };

    printf("四桁の学生番号を入力してください:");
    scanf("%d", &c);

    for(i = 0; i < N; i++)
    {
        if(c == person[i].no)
        {
            print_student( person[i] );
            n = 1;
            break;
        }
    }

        if(n == 0)
            {
                printf("受験していません.");
            }

        printf("\n");

    d = 0; 
    f = 0;
    printf("合格点を入力してください:");
    scanf("%d %d", &a, &b);

    for(i = 0; i < N; i++)
    {
        comp_total( &person[i] );
        if((person[i].eng >= a && person[i].math >= a && person[i].sci >= a) || person[i].total >= b)
        {
            print_student( person[i] );
            printf("\n");
            d += person[i].total;
            f++;
        }
    }
    e = d / f;
    printf("合格者平均:%d\n", e);

    d = 0;
    e = 0;
    for(i = 0; i < N; i++)
    {
        d += person[i].total;
        e = d / N;
    }
    printf("全員の平均点:%d\n", e);

    return 0;
}