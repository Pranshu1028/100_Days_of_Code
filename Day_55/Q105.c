/*
Q105 (Logic Enhancers)
Given integer array nums of size n, print the majority element appearing
strictly more than floor(n/2) times. Print -1 if none exists.
*/
#include <stdio.h>

int main()
{
    int a[100], n, i, j, count, answer = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[j] == a[i])
                count++;
        }

        if(count > n / 2)
        {
            answer = a[i];
            break;
        }
    }

    printf("%d", answer);
    return 0;
}
