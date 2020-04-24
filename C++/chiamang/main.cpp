#include <iostream>

using namespace std;

int main()
{
    int n,x,y,a[100000];
    cin>>n>>x>>y;
    for(int i=0;i<n;i++) cin>>a[i];
    if(x>y)
    {
        cout<<n; return 0;
    }
    else
    {
        int dem=0;
        for(int i=0;i<n;i++) if(a[i]<=x) dem++;
        cout<<dem/2 + dem%2;
        return 0;
    }
}
