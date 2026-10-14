/*
Q32
Write a program to check if a number is a palindrome.
*/

#include <stdio.h>
int main(){int n,o,r=0; scanf("%d",&n); o=n; while(n){r=r*10+n%10;n/=10;} if(r==o) printf("Palindrome"); else printf("Not palindrome"); return 0;}
