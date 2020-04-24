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
        if (i%j==0) return;
    }

    }
    return 1;

}
int main()
{
    int64_t i;
    cin>>i;
    if (snt(i)==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
