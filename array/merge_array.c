#include <stdio.h>
int main()
{
    int n1 = 0;
    int n2 = 0;
    int i = 0;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    int array1[n1];

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int array2[n2];

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }

    int result[n1 + n2];                    
    int j = 0;

    for (i = 0; i < n1; i++)
    {
        result[i] = array1[i];
    }
    for (i = n1, j = 0; i < (n1 + n2); i++, j++)
    {
        result[i] = array2[j];
    }

    printf("Merge array elements are:\n");
    for (i = 0; i < (n1 + n2); i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}
