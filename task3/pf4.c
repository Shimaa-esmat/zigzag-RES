#include <stdio.h>
int swap_value(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("After swapping by value n1 = %d, n2 = %d\n", n1, n2);
}
int swap_reference(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    printf("After swapping by reference n1 = %d, n2 = %d\n", *n1, *n2);
}
int main()
{
    int n1, n2;
    printf("Enter the first number : ");
    scanf("%d", &n1);
    printf("Enter the second number : ");
    scanf("%d", &n2);
    printf("Before swapping: n1 = %d, n2 = %d \n", n1, n2);
    swap_value(n1, n2);
    printf("n1= %d & n2 = %d\n", n1, n2); // the value remain the same
    swap_reference(&n1, &n2);
    printf("n1 = %d & n = %d\n", n1, n2); // the value swapping
    return 0;
}
