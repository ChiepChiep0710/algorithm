#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,tg;
    int64_t a[6];
    while (2>1)
    {
        cin >> n;
        if (n==0) break;

        a[1]=1; a[2]=1; a[3]=1;
        //for  (int i=0; i<n-1 ; i++ ) tg++;

        for (int i=0 ; i<n-1; i++)
        {
            a[4]=(a[2]+a[3]) % 1000000007;
            a[5]=(a[1]+a[3]) % 1000000007;
            a[6]=(a[1]+a[2]+a[3]) % 1000000007;
            a[1]=a[4]; a[2]=a[5]; a[3]=a[6];
        }
        cout << (a[1]+a[2]+a[3]) % 1000000007 << endl;
    }
    return 0;
}
