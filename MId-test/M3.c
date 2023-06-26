#include<stdio.h>

int main(void)
{
    int max = 20;
    int passengers = 0;

    passengers = 12;
    printf("1駅目を出発する時は%d人\n", passengers);

    passengers = passengers + 3 - 2;
    printf("2駅目を出発する時は%d人\n", passengers);

    passengers = passengers + 8 - 6;
    printf("3駅目を出発する時は%d人\n", passengers);

    passengers = passengers + 2 - 7;
    printf("4駅目を出発する時は%d人\n", passengers);

    passengers = passengers + 0 - 1;
    printf("5駅目を出発する時は%d人\n", passengers);

    passengers = passengers + 9 - 8;
    printf("6駅目を出発する時は%d人\n", passengers);

}