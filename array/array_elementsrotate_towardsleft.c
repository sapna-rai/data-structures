#include <stdio.h>

int main()
{
    

    int n = 0;
    int i = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int array[n];

    printf("Original array elements are:\n");


    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }



    int temp = array[0];
    for (i = 0; i < n-1; i++)
    {
        array[i] = array[i + 1];
    }
    array[i] = temp;

    printf("New array elements are:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}