#include <stdio.h>
#include <stdlib.h>
int a[4],b[4];
int sosanh(int i)
{
    if (i==0 && a[i]==b[i])return 0;
    if( a[i]>b[i]) return 1;
    if (a[i]<b[i]) return 0;
    if (a[i]==b[i]) return sosanh(i-1);


}
int main()
{

   for(int i=1;i<4;i++) scanf("%d",&a[i]);
   for (int i=1;i<4;i++) scanf("%d",&b[i]);
     if   (sosanh(2)==1)  for(int i=1;i<4;i++) printf("%d ",a[i]);
      if (sosanh(2)==0)  for(int i=1;i<4;i++) printf("%d ",b[i]);

}
