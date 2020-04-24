#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int n,k;

int tinh (int x,int y)
{
        int ans=0;
        if (x<=y) return 10;
        else
        {
                    ans+=(int)(x/y)*10+5;
                    return ans;
        }
}

int main()
{
    freopen("nuongca.inp","r",stdin);
    freopen("nuongca.out","w",stdout);
    cin>>n>>k;
    cout<<tinh(n,k);
}
