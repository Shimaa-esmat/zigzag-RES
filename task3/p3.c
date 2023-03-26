#include <stdio.h>
int main()
{
    int size;
    printf("enter size of array : ", size);
    scanf("%d", &size);
    printf("enter your array ");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter number you want to search : ");
    scanf("%d", &num);
    int mid = size / 2;
    do
    {
        if (num > arr[mid])
        {
            mid += 1;
            break;
        }
        else if (num < arr[mid] && num > arr[0])
        {
            mid -= 1;
            break;
        }
        break;
    } while (num != arr[mid] && mid > 0);
    if (num == arr[mid])
    {
        printf("%d found at location %d \n", num, mid + 1);
    }
    else if (num == arr[0])
    {
        printf("%d found at location %d \n", num, 1);
    }

    else
    {
        printf("not found\n");
    }
}
