#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double gt(int n)
{
    double s=1;
    while (n>0)
    {
        s=s*n;
        n--;
    }
    return s;
}

int main()
{
    double x; int n;
    scanf("%lf%d",&x,&n);
     double s=1;
    for (int i=1;i<=n;i++)
    {
        s=s+pow(x,i)/gt(i);
    }
    //s=s*100000;
   // int s1=(int)s;
   // printf("%d",s1);
    //double s2=(double)s1/100000;
     printf("%0.5lf",s);
}
