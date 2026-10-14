/*
Q109 (Logic Enhancers)
Given an integer array arr and integer k, print the maximum sum among all
subarrays of size k.
*/
#include <stdio.h>

int main()
{
    int a[100], n, k, i;
    int sum = 0, maxSum;

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

    for(i = 0; i < k; i++)
        sum += a[i];

    maxSum = sum;

    for(i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i - k];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}
