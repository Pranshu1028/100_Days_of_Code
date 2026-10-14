/*
Q101 (Logic Enhancers)
Take a sorted array nums[] and an integer target. Print the first and last index
of target. Print -1 -1 if target is absent.
*/
#include <stdio.h>

int main()
{
    int a[100], n, target, i, first = -1, last = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(a[i] == target)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d", first, last);
    return 0;
}
