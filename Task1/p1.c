#include <math.h>
#include <stdio.h>

int main()
{
    float num, pow1;
    printf("Enter number and power with space : ");
    scanf("%f %f", &num, &pow1);
    printf("the result is : %.3f ", pow(num, pow1));
    return 0;
}
