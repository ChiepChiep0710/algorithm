#include<iostream>
#include<math.h>
using namespace std;
int ktra(int x)
{
    if ((int)sqrt(x)==(float)sqrt(x)) return 1;
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int a,b,dem=0;
        cin>>a>>b;
        for (int j=a; j<=b; j++)
        {
            if (ktra(j)==1) dem++;
        }
        cout<<dem;
    }
    return 0;
}
