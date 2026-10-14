/*
Q103 (Logic Enhancers)
Find the leftmost pivot index of an integer array, where the sum of elements
strictly to the left equals the sum strictly to the right. Print -1 if absent.
*/
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int total = 0, left = 0, index = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for(i = 0; i < n; i++)
    {
        if(left == total - left - a[i])
        {
            index = i;
            break;
        }
        left += a[i];
    }

    printf("%d", index);
    return 0;
}
