#include <stdio.h>
int main()
{
    int data[4][3];
    int rowSums[4];
    int sum = 0;
    printf("Enter the elements:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        rowSums[i] = 0;

        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", data[i][j]);
            rowSums[i] = rowSums[i] + data[i][j];
        }
        sum = sum + rowSums[i];
        printf("\n\n");
    }
    printf("sum is %d\n", sum);
    for (int i = 0; i < 4; i++)
    {
        rowSums[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSums[i] = rowSums[i] + data[i][j];
        }
        printf("rowSums is %d\n", rowSums[i]);
    }

    return 0;
}