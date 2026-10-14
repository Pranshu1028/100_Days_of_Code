/*
Q86
Check if a string is a palindrome.
*/

#include <stdio.h>
#include <string.h>
int main(){char s[100];int i,n,p=1;fgets(s,sizeof(s),stdin);n=strcspn(s,"\n");for(i=0;i<n/2;i++)if(s[i]!=s[n-1-i]){p=0;break;}printf(p?"Palindrome":"Not palindrome");return 0;}
