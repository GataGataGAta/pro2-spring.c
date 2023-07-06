#include<stdio.h>


int main()
{
    int n, i, j;
    int sum;
    printf("Please enter the number>>>");
    scanf("%d", &n);
    if (n >= 2000)
    {
        printf("The number is under 2000\n");
    }

    else
    {
        int a[50];

        i = 0;
        while(i * i <= n)
        {
            a[i] = i * i;
            printf("%d\n", a[i]);
            i++;
        }

        a[i] = -1;
        j = 0;
        sum = 0;
        while(a[j] != -1)
        {
            sum += a[j];
            j++;
        }
        printf("The sum is %d\n", sum);

        
    }
    

}