#include <stdio.h>
int main()
{
int arr[100], n , swap; 
printf("enter size of list ");
scanf("%d", &n); 
printf("enter numbers of array ");
for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]); 
    
for(int i = 0 ; i < n - 1; i++)
{
    for(int j = 0 ; j < n-i-1; j++)
    {
        if(arr[j] > arr[j+1]) 
        {
        swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;
        }
    }
    } 
printf("Sorted Array: "); 
for(int i = 0; i < n; i++)
printf("%d ", arr[i]);
return 0;
}
