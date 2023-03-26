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
    int freq_arr[n];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count += 1;
            }
        }
        freq_arr[i] = count;
    }
    for (int i = 0; i < n; i++)
    {
        printf("frequency of %d is %d \n", arr[i], freq_arr[i]);
    }
}
