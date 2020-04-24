#include <iostream>
#include<cstdio>
using namespace std;
int64_t gt(int i)
{
    if (i==1) return 1;
    if (i==0) return 1;
    return i*gt(i-1);
}
int main()
{
    int n=-1; int a[10000]; int c=-1;
    while (c!=0)
    {
        n++;
        cin>>c;
        a[n]=c;

    }
    for (int i=0;i<n;i++) cout<<gt(a[i])<<endl ;
    return 0;
}
