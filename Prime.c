//  ENTERED NUMBER IS PRIME OR NOT 
#include <stdio.h>
int main()
{
        int a,count=0,i;
        printf("Enter a number : ");
        scanf("%d",&a);
        for( i=2;i<a;i++)
        {
            if(a%i==0)
            {
                break;
            }
        }
        if(i==a)
        {
            printf("Prime number ");
        }
        else
        {
            printf("not a prime number ");
        }

    return 0;
}
