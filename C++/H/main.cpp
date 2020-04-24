#include <iostream>
#include <math.h>
using namespace std;
int a[100000]; int n; int k;
int bnsearch(int i)
{
    int l=i; int r=n;int m; int ans=0;
    while (l<=r)
    {
        m=(l+r)/2;
        if (a[i]+a[m]>k) {r=m-1;ans=m;}
        if (a[i]+a[m]<k) {l=m+1;}
     }
    return ans;
}

int main()
{
    cin>>n>>k;
    //int dem=0;
    for(int i=1;i<=n;i++) cin>>a[i];


   int dem=0;
    for(int i=1;i<=n;i++)
    {
        int t=bnsearch(i);
        if (t!=0) dem=dem+(t-i-1);
    }
   /* for(int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++) if(a[i]+a[j]<=k) dem++;
    }*/
    cout<<dem;
}
