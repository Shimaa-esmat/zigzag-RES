#include <stdio.h>
int main()
{
int arr[100], n, p, swap;
printf("enter size of list ");
scanf("%d", &n);
printf("enter numbers of array ");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
for(int i = 0; i < n - 1; i++)
{
    p=i;
    for(int j = i + 1; j < n; j++)
    {
        if(arr[p] > arr[j])
            p=j;
    }
    if(p != i)
    {
        swap=arr[i];
        arr[i]=arr[p];
        arr[p]=swap;
    }
}
printf("Sorted Array: ");
for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);
return 0;
}
