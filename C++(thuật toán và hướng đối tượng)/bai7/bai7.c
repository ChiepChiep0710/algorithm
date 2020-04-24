#include<stdio.h>
#include<conio.h>
#include<math.h>

int min1(int a, int b)
{
    return((a+b-abs(a-b))/2);
}
int max1(int a, int b)
{
    return ((a+b+abs(a-b))/2);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("so lon nhat la %d \n",max1(max1(a,b),c));
    printf("so be nhat la %d \n",min1(min1(a,b),c));
}
