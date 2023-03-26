#include <stdio.h>

int prime_num(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i != 0)
            return 0;
        else
            return 1;
    }
}
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    if (prime_num(n) == 0)
        printf("%d is prime \n", n);
    else
        printf("%d not prime \n", n);
}
