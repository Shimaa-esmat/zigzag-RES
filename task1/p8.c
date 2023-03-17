#include <stdio.h>

int main()
{
    int num, i, factorial;
    factorial = 1;
    printf("Enter number : ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    printf(" Factorial of %d = %d ", num, factorial);
}
