/*
Q106 (Logic Enhancers)
For each array element, print the nearest greater element on its right.
Print -1 when none exists. Use brute-force nested loops, not a stack.
*/
#include <stdio.h>

int main()
{
    int a[100], n, i, j, next;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        next = -1;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                next = a[j];
                break;
            }
        }

        printf("%d", next);
        if(i < n - 1)
            printf(", ");
    }

    return 0;
}
