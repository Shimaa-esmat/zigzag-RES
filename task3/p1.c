#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array : ", n);
    scanf("%d", &n);
    printf("enter your array ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num, loc;
    printf("Enter the element you want insert and its location : ");
    scanf("%d %d", &num, &loc);
    arr[loc - 1] = num;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

