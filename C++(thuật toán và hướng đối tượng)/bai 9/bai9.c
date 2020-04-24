#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     int n;
     scanf("%d",&n);
     int m=n*(n+1)*(2*n+1);
     m=m/6;
     printf("%d",m);
 }
