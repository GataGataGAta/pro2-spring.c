#include <stdio.h>

/* 1 + 1/x + 1/(x*x) + 1/(x*x*x) + ... + 1/x^k を計算して返す */
double ssum( double x, int k )
{
	int i;
	double s, r;
	s = 1;
	r = 1;
	for ( i = 1; i <= k; i++ ){
		r /= x;
		s += r;
	}

	return s;
}

char char_plus( char c , int k )
{
	return c + k;
}


int main( void )
{
	char c, ck;
	int k;
	double x, y;
	double n;

	c = 'f';
	k = 3;
	ck = char_plus( c, k );
	printf( "'%c' の %d 個後の文字は '%c' です\n", c, k, ck );

	x = 2.0;
	n = 5;
	y = ssum( x, n );
	printf( "x = %f, n = %2.0f, y = %f \n", x, n, y );

	return 0;
}




