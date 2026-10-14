/*
Q72
Find the sum of all elements in a matrix.
*/

#include <stdio.h>
int main(){int a[10][10],r,c,i,j,s=0;scanf("%d%d",&r,&c);for(i=0;i<r;i++)for(j=0;j<c;j++){scanf("%d",&a[i][j]);s+=a[i][j];}printf("%d",s);return 0;}
