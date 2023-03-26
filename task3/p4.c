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
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                max = arr[i];
                arr[i] = arr[j];
                arr[j] = max;
            }
        }
    }
    printf("sorted array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
