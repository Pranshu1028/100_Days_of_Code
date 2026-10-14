/*
Q76
Check if a matrix is symmetric.
*/

#include <stdio.h>
int main(){int a[10][10],n,i,j,s=1;scanf("%d",&n);for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);for(i=0;i<n;i++)for(j=0;j<n;j++)if(a[i][j]!=a[j][i])s=0;printf(s?"Matrix is symmetric":"Matrix is not symmetric");return 0;}
