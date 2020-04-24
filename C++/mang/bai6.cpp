#include <iostream>

using namespace std;

int main()
{
    int n,x,t,a[100000];
    cin>>n>>x>>t;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n+1;i>=t+1;i--) a[i]=a[i-1];
    a[t]=x;
    for(int i=1;i<=n+1;i++) cout<<a[i];
    return 0;


}
