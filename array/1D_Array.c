#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    // int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("%d\n", sum);

    return 0;
}