#include <stdio.h>
int main()
{
    int n = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter the elements of an array:\n");
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int maximum = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
        
    }


    printf("Maximum number in an array is %d\n", maximum);

    return 0;
}