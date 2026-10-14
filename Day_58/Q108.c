/*
Q108 (Logic Enhancers)
Given integer array nums, print answer[i] as the product of all elements
except nums[i].
*/
#include <stdio.h>

int main()
{
    int a[100], answer[100];
    int n, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        answer[i] = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
                answer[i] *= a[j];
        }
    }

    for(i = 0; i < n; i++)
        printf("%d ", answer[i]);

    return 0;
}
