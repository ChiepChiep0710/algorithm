#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[100000],b[100000],c[100000];
    for (int i=0;i<=1001;i++) c[i]=0;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];
    for (int i=0;i<m;i++) c[b[i]]=1;
    for (int i=0;i<n;i++)
        if (c[a[i]]==0) cout<<a[i]<<" ";
    return 0;

}
