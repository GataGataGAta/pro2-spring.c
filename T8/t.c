#include <stdio.h>

#define test_member 3
#define test_subject 3

int x;

void average_check(int test_result[test_member][test_subject])
{
    int sum=0;
    for(int i = 0; i < test_member; i++)
    {
        for(int j = 0; j < test_subject; j++)
        {
            sum+=test_result[j][i];
        }
        test_result[3][i] = sum / test_member;
        sum = 0;

        printf("%d人目の平均点: %d \n",i + 1, test_result[3][i]);
        
    } 
    printf("\n");  
}

void sum_check(int test_result[test_member][test_subject])
{
    int sum=0;
    for(int i = 0; i < test_member; i++)
    {
        for(int j = 0; j < test_subject; j++)
        {
            sum+=test_result[j][i];
        }
        test_result[i][3] = sum;
        sum = 0;

        printf("%d人目の合計点: %d \n",i + 1, test_result[i][3]);
        
    }   
}

int main(void)
{
    int test_result[test_member + 1][test_subject] = {{100, 70, 80},
                                                  {80, 70, 60},     
                                                  {70, 50, 60},
                                                  {0, 0, 0}};
    
    average_check(test_result);
    sum_check(test_result);

}

