/*
Q34
Write a program to check if a number is prime.
*/

#include <stdio.h>
int main(){int n,i,p=1; scanf("%d",&n); if(n<2)p=0; for(i=2;i*i<=n;i++) if(n%i==0){p=0;break;} printf(p?"Prime":"Not prime"); return 0;}
