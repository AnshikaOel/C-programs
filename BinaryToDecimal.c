//  CONVERT BINARY TO DECIMAL
#include <stdio.h>
int main()
{
    int a,r,num=0,count=0;
    printf("Converting binary to decimal : ");
    printf("Enter a binary number : ");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        num=num+(r*pow(2,count));
        a=a/10;
        count++;
    }
    printf("decimal of the given binary is : ");
    printf("%d",num);
    return 0;
}
//   **OUTPUT**  //
//  Converting binary to decimal : Enter a binary number : 1010
//  decimal of the given binary is : 10
