//   BASIC BITWISE OPERATOR
#include <stdio.h>

int main()
{
   int a=2,b=3;
   int c,d,e,f;
   c=a&b;
   d=a|b;
   e=b>>1;
   f=b<<1;
   printf("a&b %d\n",c);
   printf("a|b %d\n",d);
   printf("b>>1 %d\n",e);             // RIGHT SHIFT
   printf("b<<1 %d\n",f);              // LEFT SHIFT    
    return 0;
}
