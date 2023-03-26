#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter  number of rows : ");
    scanf("%d", &row);
    printf("Enter  number of columns : ");
    scanf("%d", &column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter [%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the matrix \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("the sum of main diagonal = %d \n", sum);
}
