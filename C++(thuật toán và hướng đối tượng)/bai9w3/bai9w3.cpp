#include<iostream>
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
int ktrat(int n)
{
    int sum=0;
    while(n)
    {
      sum=sum+n%10;
      n=n/10;
    }
    return sum;
}
int ktrad(int n)
{
    int nh=n%10;
    n=n/10;
    while (n)
    {
       if (nh<n%10) return 0;
       nh=n%10;
       n=n/10;
    }
    return 1;
}
int main()
{
    for(int i=1000000; i<=9999999; i++)
    {
        if (snt(i)==1&&snt(ktrat(i))==1&&ktrad(i)==1) cout<<i<<" ";
    }
   //cout<<ktrat(50);

}
