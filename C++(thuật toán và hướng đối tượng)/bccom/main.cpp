#include <iostream>
#include<math.h>
using namespace std;
int xuly(int n)
{
    int s=0;
    while (n)
    {
        int a=n%10;
        s=s+a;
        n=n/10;

    }
    if (s<10) return s;
    else return(xuly(s));
}

int main()
{
    int a[100000];
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {

        cin>>a[i];
    }
    for (int i=1;i<=n;i++) cout<<xuly(a[i])<<endl;
    return 0;
}
