/*
Q2
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include <stdio.h>
int main(){float a,b; scanf("%f%f",&a,&b); printf("Sum=%.2f\nDifference=%.2f\nProduct=%.2f\n",a+b,a-b,a*b); if(b!=0) printf("Quotient=%.2f",a/b); else printf("Division by zero not possible"); return 0;}
