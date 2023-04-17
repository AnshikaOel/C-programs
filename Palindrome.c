//  find whether its palindrome or not
#include <stdio.h>
int main()
{
    int n,i,rev=0,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        a=i%10;
        rev=rev*10+a;
        i=i/10;
    }
    if(rev==n)
    {
        printf("Entered number is a palindrome number");
    }
    else
    {
        printf("Entered number is not a palindrome number");
    }
    return 0;
}
//   **OUTPUT**   //
//  Enter a number : 121
//  Entered number is a palindrome number
