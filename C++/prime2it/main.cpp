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

    int64_t n; double x;
    cin>>n;
    x=(double)sqrt((double)n);
    if (x-(int)x!=0) {cout<<"NO"; return 0;}
    else
    {
        if (snt((int64_t)x)==1) cout<<"YES";
        else cout<<"NO";
    }
    return 0;

}
