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
int thuannghich(int64_t n)
{
    int64_t p=n; int64_t res=0;
    while(p>0)
    {
        int r=p%10;
        if (r==4) return 0;
        res=res*10+r;
        p=p/10;
    }
    return (res==n);
}

int main()
{
    for(int64_t i=10000;i<=9999999;i++)
        if (snt(i)==1&&thuannghich(i)==1) cout<<i<<" ";
   return 0;
}
