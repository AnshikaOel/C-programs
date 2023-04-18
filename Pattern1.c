#include <stdio.h>
int main()
{
    printf("Printing the pattern : \n");
    for(int i=1;i<=3;i++)
    {
        for(int a=1;a<=3-i;a++)
        {
            printf("  ");
        }
        for(int j=1;j<=((2*i)-1);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=2;i>=1;i--)
    {
        for(int b=1;b<=3-i;b++)
        {
            printf("  ");
        }
        for(int j=1;j<=((2*i)-1);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Printing the pattern : 
//     * 
//   * * * 
// * * * * * 
//   * * * 
//     *
