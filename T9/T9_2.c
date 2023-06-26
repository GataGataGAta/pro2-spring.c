#include <stdio.h>

int main (void)
{
   int a = 1234;
   int b = 5678;
   int c = 7777;
   
   int *ap;
   int *bp;
   int *cp;
   
   ap = &a;
   bp = &b;
   cp = &c;

   /* ここに a, b, c のアドレスを表示する文を追加 */
   printf("Address = %p\n", ap);
   printf("Address = %p\n", bp);
   printf("Address = %p\n", cp);

   return 0;
}
