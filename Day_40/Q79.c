/*
Q79
Perform diagonal traversal of a matrix.
*/

#include <stdio.h>
int main(){int a[10][10],n,i,j;scanf("%d",&n);for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);for(i=0;i<n;i++)printf("%d ",a[i][i]);printf("\n");for(i=0;i<n;i++)printf("%d ",a[i][n-1-i]);return 0;}
