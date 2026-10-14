/*
Q73
Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>
int main(){int a[10][10],s[10],r,c,i,j;scanf("%d%d",&r,&c);for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);for(i=0;i<r;i++){s[i]=0;for(j=0;j<c;j++)s[i]+=a[i][j];printf("%d\n",s[i]);}return 0;}
