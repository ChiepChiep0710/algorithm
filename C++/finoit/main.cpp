#include <iostream>

using namespace std;
int f[1000000];
int main()
{
    int n;
    cin>>n;
    f[1]=1; f[2]=1;
    for (int i=3;i<=n;i++)
    {
        f[i]=(f[i-1]+f[i-2])%1000000007;
    }
    cout<<f[n];
    return 0;
}
