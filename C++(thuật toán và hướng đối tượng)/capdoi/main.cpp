#include <iostream>
using namespace std;

int main()
{
    int n,e,a[100000],dem=0;
    cin>>n>>e;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
    {
       if (a[i]+a[j]*a[j]==e) dem++;
    }

    cout<<dem;
    return 0;
}
