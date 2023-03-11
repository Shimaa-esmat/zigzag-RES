#include <stdio.h>

int main()
{
    int i, num, T;
    printf("Enter number : ");
    scanf("%d", &num);
    for (i = 0; i <= 12; i++)
    {
        T = num * i;
        printf("%d * %d = %d ", num, i, T);
        printf("\n");
    }
}
