#include <math.h>
#include <stdio.h>
#include<stdio.h>
void insertionSort(int arr[] , int n )
{
    for(int i =1 ; i<n ; i++)
    {
        int temp = arr[i] , j;
        for (  j = i-1 ; j >= 0; j--)
        {
            if(arr[j]>temp)
            arr[j+1]=arr[j];
            else break ;
        }
        arr[j+1]=temp ; 
        
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}


