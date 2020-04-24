#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf(" %f %f %f",&a,&b,&c);
    float d=a*b*c;
    d=sqrt(d);
    printf(" %f",d/a+d/b+d/c);
}
