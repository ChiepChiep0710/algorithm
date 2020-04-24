#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf(%d %d %d,&a,&b,&c);
    if(a>0&&b>0&&c>0&&a+c>b&&a+b>c&&b+c>a) printf("1");
    else printf("0");
    return 0;
}
