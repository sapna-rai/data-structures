#include <stdio.h>
#include <limits.h>
int main()
{
    int n = 0;
    int i = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of an array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int third_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            third_largest = second_largest;
            second_largest = largest;
            largest = a[i];
        }
        else if (a[i] > second_largest)
        {
            third_largest = second_largest;
            second_largest = a[i];
        }
        else if (a[i] > third_largest)
        {
            third_largest = a[i];
        }
    }
    printf("%d is the largest, %d is the second largest, %d is the third largest no.\n", largest, second_largest, third_largest);

    return 0;
}