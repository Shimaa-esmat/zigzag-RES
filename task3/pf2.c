#include <stdio.h>

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    printf("the factorial of %d = %d \n", n, factorial(n));
}
