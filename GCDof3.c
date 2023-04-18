//   GCD using recursion
#include <stdio.h>
int gcd(int a, int b)
{
    if(b==0)
    return a;
     
     return gcd(b,a%b);
}

int main()
{
   // printf("Hello World");
int a , b , c;
scanf("%d%d%d",&a,&b,&c);int r = gcd(a,b);
printf("%d",r);
    return 0;
}

