#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n; int p;
    int k;
    int a[20000];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]==1) k=i;
        if (a[i]==n) p=i;
        if (k==1||k==n||p==1||p==n)
        {
            cout<<n-1;
            return 0;
        }
    }
   cout<<max(k-1,n-k);
}
