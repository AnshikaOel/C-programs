// PRIME NUMBER BETWEEN M TO N 
#include <stdio.h>
int main()
{
    int m ,n, count;
    printf("Enter m : ");
    scanf("%d",&m);
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=m;i<=n;i++)
    {
        count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
