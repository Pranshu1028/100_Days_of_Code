/*
Q81
Count characters in a string without using built-in length functions.
*/

#include <stdio.h>
int main(){char s[100];int i=0;fgets(s,sizeof(s),stdin);while(s[i]!='\0'&&s[i]!='\n')i++;printf("%d",i);return 0;}
