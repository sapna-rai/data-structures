#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
    int temp = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int array[n];

    
    printf("Original array elements are:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

    }

    printf("Reversed array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}