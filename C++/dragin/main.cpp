#include <iostream>
#include <math.h>
using namespace std;
int x[1000000], y[1000000];
int n; int64_t s;

int sapxep()
{
    for (int i=1;i<=n;i++)
        for (int j=i+1;j<=n;j++)
        {
            if (x[i]>x[j])
            {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }


 return 0;
}
int main()
{
    cin>>s>>n;
    //int t=-1;
    for (int i=1;i<=n;i++) cin>>x[i]>>y[i];
    sapxep();
    int m=1;
    for (int i=1;i<=n;i++)
    {
        if(s>x[i])
        {
            m++;
            s=s+y[i];
        }
        else
        {
            cout<<"NO";
            return 0;
        }
        if (m==n+1)
        {
            cout<<"YES";
            return 0;
        }
    }
    return 0;

}
