#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,m,kq;
    cin>>n>>m;
    int c=min(n,m);
    int k=(int)sqrt(n+m);
    for (int i=k; i>0; i--)
    {
        kq=i;
        if (i%2 ==0)
        {
            int tmp=i*i/2;
            if ((tmp<=n)&&(tmp<=m)) break;
        }
        else
        {
            int tmp=(i*i-1)/2;
            if ((tmp<=m)&&(tmp<=n)) break;
        }
    }
    if (kq==0) cout<<"1";
    else cout<<kq;
    return 0;
}
