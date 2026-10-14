/*
Q55
Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>
int main(){int n,x,i,p;scanf("%d",&n);for(x=2;x<=n;x++){p=1;for(i=2;i*i<=x;i++)if(x%i==0){p=0;break;}if(p)printf("%d ",x);}return 0;}
