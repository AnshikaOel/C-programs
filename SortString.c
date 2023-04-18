#include <stdio.h>
#include<string.h>
void swapp(char *ch , char *ch1)
{
        char temp = *ch ;
       *ch = *ch1;
       *ch1 = temp; 
      
}
int main()
{
   char arr[5]="samr";
   
   int n = strlen(arr);
   for(int i =1; i< n ; i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapp(&arr[j] , &arr[j+1]);
            }
        }
    }   
   printf("sorted string is %s" , arr );
   
    return 0;
}

