//  FACTORIAL OF A NUMBER USING RECURSION
#include <stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int c=factorial(a);
    printf("The factorial of the number is %d",c);

    return 0;
}
