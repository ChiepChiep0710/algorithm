#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   int n; int a[100000+1];
   cin>>n;
   int k;
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   for(int i=1;i<n;i++) a[i]=a[i]+a[i-1];
   for(int i=0;i<n;i++)
       if (a[i]>300) {k=i-1; break;}
    if (k>-1) cout<<k+1<<' ';
    int s=0;
    for(int i=0;i<=k;i++) s=s+a[i];
    cout<<s;
    return 0;

}
