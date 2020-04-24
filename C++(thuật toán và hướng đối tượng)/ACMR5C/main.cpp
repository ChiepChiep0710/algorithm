#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; int a[100000+1];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++) a[i]=a[i]+a[i-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>300)
    }

}
