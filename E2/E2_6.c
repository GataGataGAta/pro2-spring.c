#include <stdio.h>

int main(void)
 {
	int small, big, c, a;  /* c は，数を数えるための変数 */
    c = 0;
    printf("二つの数字を、10, 100のような形で入力してください>>>");
    scanf("%d, %d", &small, &big);
    
    if(small>big)
    {
        printf("bigよりsmallは大きな数字にしてください。\n");
    }

    else{
	for ( a=small ; a < big ; a++ ) 
    {
		if ( a % 3 == 0 || a % 5 == 0) 
        { 
			c++; 
		}  

	}
     printf( "答えは %d 個です\n", c);
    }


	return 0;

 }