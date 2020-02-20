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

    for(int i = 0; i < n; i++){
        if(a[i] > largest){
            second_largest = largest;
            largest = a[i];
        }
    }
    printf("%d is the largest and %d is the second largest no.\n", largest, second_largest);


    return 0;
}