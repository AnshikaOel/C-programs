// linear search
#include <stdio.h>

int main()
{
    int arr[6],size=6,key,i;
    printf("Enter the elements in an array : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            printf("The %d is found at index %d",key,i);
            break;
        }
    }
    if(i==size)
    {
        printf("element is not found");
    }
    
    return 0;
}
