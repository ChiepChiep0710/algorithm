#include <iostream>

using namespace std;

int main()
{
    int n,a[100000],cs,dem=1,res1=0,res2;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cs=1;
    for(int i=1;i<=n-1;i++)
    {
        if (a[i+1]>=a[i])
        {
            dem++;
        }
        else
        {
            if (dem>res1) res1=dem;
            res2=cs;
            cs=i+1;
            dem=1;
        }
    }
    cout<<res2<<" "<<res1;
    return 0;

}
