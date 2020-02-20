#include <stdio.h>

void mergeArray(int *array1, int size1, int *array2, int size2, int *result)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < size1; i++)
    {
        result[i] = array1[i];
    }
    for (i = size1, j = 0; i < (size1 + size2); i++, j++)
    {
        result[i] = array2[j];
    }
}

int main()
{
    int n1 = 0;
    int n2 = 0;
    int i = 0;
    //Ask user for size of first array say n1
    //Define array of size n1
    //Take input for first array
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    int array1[n1];

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }
    //Ask user for size of second array
    //Define array of size n2
    //Take input for second array
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int array2[n2];

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }
    //Define a new array of size n1 + n2
    // copy first array values to  the new array
    //copy second array values to  the new array
    int result[n1 + n2];
    mergeArray(array1, n1, array2, n2, result);

    //Print the elements of the new array
    printf("Merge array elements are:\n");
    for (i = 0; i < (n1 + n2); i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}
