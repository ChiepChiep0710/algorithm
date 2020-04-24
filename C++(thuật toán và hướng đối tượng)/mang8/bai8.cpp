#include <iostream>

using namespace std;

int main()
{
    int a[10000],b[10000];
    a[1]=1;
    for(int i=1;i<=100;i++)
    {
     a[2*i]=i*i;
     a[2*i+1]=2*i+1;
    }
    int k;
    cin>>k;
    for (int i=1;i<=k;i++) cin>>b[i];
    for (int i=1;i<=k;i++) cout<<a[b[i]]<<endl;
    return 0;
}
