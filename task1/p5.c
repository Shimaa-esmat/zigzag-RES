#include <stdio.h>

int main()
{

    float num1, num2, num3, max;
    printf(" enter three numbers ");
    scanf("%f %f %f", &num1, &num2, &num3);
    max = (num1 > num2) ? num1 : num2;
    (max > num3) ? printf("the largest number is %.1f ", max) : printf("the largest number is %.1f ", num3);
    return 0;
}

