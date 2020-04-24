#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
using namespace std;

int n,k;
int res = 0 , t;
int a[5010][5010];

int main()
{
    cin>>n>>k;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            a[i][j] += a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    for(int i=k;i<=n;i++)
        for(int j=k;j<=n;j++)
        {
            t = a[i][j]+a[i-k][j-k]-a[i][j-k]-a[i-k][j];
            res = max(res,t);
        }
    cout<<res;
    return 0;
}
