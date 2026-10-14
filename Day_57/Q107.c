/*
Q107 (Logic Enhancers)
For each array element, print the nearest greater element on its left.
Print -1 when none exists. Use brute-force nested loops, not a stack.
*/
#include <stdio.h>

int main()
{
    int a[100], n, i, j, previous;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        previous = -1;

        for(j = i - 1; j >= 0; j--)
        {
            if(a[j] > a[i])
            {
                previous = a[j];
                break;
            }
        }

        printf("%d", previous);
        if(i < n - 1)
            printf(", ");
    }

    return 0;
}
