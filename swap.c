// SWAPPING WITHOUT USING THIRD VARIABLE
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Values after swapping will be \n");
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;
}
