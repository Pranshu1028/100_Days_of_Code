/*
Q104 (Logic Enhancers)
Given positive integer n, find pivot integer x such that sum 1..x equals sum
x..n. Print -1 if no such integer exists.
*/
#include <stdio.h>

int main()
{
    int n, x, answer = -1;
    int left = 0, total;

    printf("Enter n: ");
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for(x = 1; x <= n; x++)
    {
        left += x;

        if(left == total - left + x)
        {
            answer = x;
            break;
        }
    }

    printf("%d", answer);
    return 0;
}
