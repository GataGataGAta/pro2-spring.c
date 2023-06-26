#include<stdio.h>
#include<math.h>


double deg_to_rad(int x)
{
  return x * M_PI / 180.0;
}

int main(void)
{
    printf(" 0 度は %f ラジアン\n", deg_to_rad( 0 ) );
    printf(" 30 度は %f ラジアン\n", deg_to_rad( 30 ) );
    printf(" 45 度は %f ラジアン\n", deg_to_rad( 45 ) );
    printf(" 75 度は %f ラジアン\n", deg_to_rad( 75 ) );
    printf(" 90 度は %f ラジアン\n", deg_to_rad( 90 ) );
    printf(" 135 度は %f ラジアン\n", deg_to_rad( 135 ) );
    printf(" 180 度は %f ラジアン\n", deg_to_rad( 180 ) );
}