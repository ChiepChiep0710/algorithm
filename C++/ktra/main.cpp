#include <iostream>
#include<math.h>
using namespace std;
int snt(int64_t i)
{
    if (i<2) return 0;
    else if (i>2)
    { if (i%2==0) return 0;

    for (int j=3; j<=sqrt((double)i); j++)
    {
        if (i%j==0) return 0;
    }

    }
    return 1;

}
int main()
{
    int n; int64_t a[100000];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        if (snt(a[i])==1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}
