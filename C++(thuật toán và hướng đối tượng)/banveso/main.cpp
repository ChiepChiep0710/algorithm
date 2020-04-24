#include <iostream>
#include <math.h>

using namespace std;
bool xuly(int k)
{
    bool a[50];
    for(int i=1;i<=49;i++) a[i]=true;
    for(int i=1; i<=k*6; i++)
    {
        int t;
        cin>>t;
        a[t]=false;

    }
    for (int i=1;i<=49;i++)
        if (a[i]) return false ;
    return true;

}
int main()
{
    int kt[100000];
    int n,dem=0;
    cin>>n;
    while (n!=0)
    {
        dem++;
        if (xuly(n)) kt[dem]=1;
        else kt[dem]=0;
        cin>>n;
    }
    for (int i=1;i<=dem;i++)
         if (kt[i]==1) cout<<"Yes"<<endl ; else cout<<"No"<<endl;
    return 0;
}
