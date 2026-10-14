/*
Q110 (Logic Enhancers)
Given integer array arr and integer k, find the maximum element in each
subarray/window of size k and print the results separated by spaces.
*/
#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, max;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    for(i = 0; i <= n - k; i++)
    {
        max = a[i];

        for(j = i + 1; j < i + k; j++)
        {
            if(a[j] > max)
                max = a[j];
        }

        printf("%d ", max);
    }

    return 0;
}
