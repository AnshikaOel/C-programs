// SELECTION SORT
#include <stdio.h>
int main()
{
    int arr[6],size=6,temp,k;
    printf("Enter the elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++)
    {
        k=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[k]>arr[j])
            {
                k=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
