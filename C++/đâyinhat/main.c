#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,a[100000];
   scanf("%d",&n);
   int c=-1;
   int res1=0, res2=0;
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   a[n]=-99999999;
   for(int i=0;i<n;i++)
    if (a[i+1]<a[i])
   {
          int d=i-c;
          if(d>res1)
          {
              res1=d;
              res2=c+1;
          }
          c=i;

   }
  printf("%d %d",res2,res1);

}
