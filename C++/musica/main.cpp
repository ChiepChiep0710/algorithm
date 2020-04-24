#include <iostream>

using namespace std;

int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    if (n==1) {cout<<"none"; return 0;}
    if (a[1]<a[2])
    {
         for(int i=1;i<=n-1;i++)
            if (a[i]>=a[i+1])
         {
             cout<<"none";
             return 0;
         }
        cout<<"ascending";
    }
    else if(a[1]>a[2])
    {
        for(int i=1;i<=n-1;i++)
            if (a[i]<=a[i+1])
         {
             cout<<"none";
             return 0;
         }
        cout<<"descending.";
    }
    else if(a[1]==a[2]) cout<<"none";


    return 0;
}
