#include <iostream>

using namespace std;

int main()
{
    int a[100000],n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    if (a[1]>a[3]) a[1]=a[1]-a[3];
    else a[1]=0;
    a[2]=a[2]*2+a[1];
    int res=a[4]+a[3]+(int)(a[2]/4)+(a[2]%4!=0);
    cout<<res;
    return 0;


}
