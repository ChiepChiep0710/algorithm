#include <iostream>

using namespace std;

int main()
{
    int n,a[10000],dem=0,b[10000];
    cin>>n;
    for(int i=1;i<=n;i++) {cin>>a[i]; b[i]=0;}
    for(int i=1;i<=n;i++)
    {
       for(int j=i+1;j<=n;j++) if (a[j]<a[i]&&b[j]==0) {dem++ ; b[j]=1;}
    }

    cout<<dem;
    return 0;
}
