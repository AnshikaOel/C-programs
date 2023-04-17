//  converting decimal to octal 
#include <stdio.h>
int main()
{
    int a,r,count=0,num=0;
    printf("Enter a decimal number : ");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%8;
        num=num+(r*(pow(10,count)));
        count++;
        a=a/8;
    }
    printf("The octal of the enterd decimal number is : ");
    printf("%d",num);
    return 0;
}
//  **OUTPUT**  //
//  Enter a decimal number : 125
//  The octal of the enterd decimal number is : 175
