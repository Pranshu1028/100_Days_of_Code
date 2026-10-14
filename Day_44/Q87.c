/*
Q87
Count spaces, digits, and special characters in a string.
*/

#include <stdio.h>
int main(){char s[100];int i=0,sp=0,d=0,x=0;fgets(s,sizeof(s),stdin);while(s[i]&&s[i]!='\n'){if(s[i]==' ')sp++;else if(s[i]>='0'&&s[i]<='9')d++;else if(!((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')))x++;i++;}printf("Spaces=%d\nDigits=%d\nSpecial=%d",sp,d,x);return 0;}
