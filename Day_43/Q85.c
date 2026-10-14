/*
Q85
Reverse a string.
*/

#include <stdio.h>
#include <string.h>
int main(){char s[100];int i,n;fgets(s,sizeof(s),stdin);n=strcspn(s,"\n");for(i=n-1;i>=0;i--)printf("%c",s[i]);return 0;}
