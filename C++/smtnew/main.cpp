#include <iostream>

using namespace std;

int main()
{

   int a[1000000],st[1000000],sp[1000000],h[1000000];
   int n,m,j,t;
   cin>>n>>m;
   for(int i=0;i<n;i++) cin>>a[i];
   st[0]=a[0];sp[n-1]=a[n-1]
   for(int i=1;i<n;i++) st[i]=st[i-1]+a[i];
   for(int i=n-2;i>=0;i++) st[i]=st[i+1]+a[i];
   for(int i=0;i<n;i++)
        if(st[i]>m)
   {
       j=i;
       break;
   }
        return 0;
}
