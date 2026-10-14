/*
Q111 (Logic Enhancers)
Given integer array arr and integer k, find the first negative integer in
each subarray/window of size k. Print 0 for a window with no negative value.
*/
#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, first;

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
        first = 0;

        for(j = i; j < i + k; j++)
        {
            if(a[j] < 0)
            {
                first = a[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}
