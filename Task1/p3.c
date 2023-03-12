#include <stdio.h>

int main()
{
    float num1, num2;
    char op;
    printf("enter your first , secand number and operation (+, -, *, /) :  ");
    scanf("%f %f %c", &num1, &num2, &op);
    switch (op)
    {
    case '+':
        printf("%.3f + %.3f = %.3f ", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.3f - %.3f = %.3f ", num1, num2, num1 - num2);
        break;
    case '/':
        printf("%.3f / %.3f = %.3f ", num1, num2, num1 / num2);
        break;
    case '*':
        printf("%.3f - %.3f = %.3f ", num1, num2, num1 * num2);
        break;

    default:
        printf("enter 2 numbers and one operation (+, -, *, /) ");
        break;
    }
}
