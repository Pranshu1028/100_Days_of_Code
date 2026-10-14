/*
Q91
Remove all vowels from a string.
*/

#include <stdio.h>
int main(){char s[100],o[100];int i=0,j=0;fgets(s,sizeof(s),stdin);while(s[i]){char c=s[i++];if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))o[j++]=c;}o[j]='\0';printf("%s",o);return 0;}
