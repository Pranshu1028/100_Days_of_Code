/*
Q102 (Logic Enhancers)
Given a sorted array arr[] and integer x, print the 0-based index of the first
element greater than or equal to x. Print -1 if no such element exists.
*/
#include <stdio.h>

int main()
{
    int a[100], n, x, i, index = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);
    return 0;
}
