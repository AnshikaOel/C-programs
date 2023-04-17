#include <stdio.h>

int main()
{
    printf("Enter the no. of line in which you want to print pattern : ");
    int n;
    printf("%d",&n)
    printf("Printing the pattern : \n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        for(int l=1;l<=i-1;l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//  Enter the no. of line in which you want to print pattern : 
//  3
//  Printing the pattern : 
//      * 
//    * * * 
//  * * * * *
