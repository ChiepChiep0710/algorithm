#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
int kt(string a)
{
    int dd=a.size();
    for (int i=0;i<dd; i++) if (a[i]!=a[dd-i-1]) return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    string a[10000];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++)
    {
        if (kt(a[i])==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
