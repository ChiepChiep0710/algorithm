#include <iostream>

using namespace std;
int64_t s[1000000],a[1000000]; int64_t n,k;
int taomang()
{
    for (int i=1;i<=n;i++) s[i]=s[i-1]+a[i];
    return 0;
}
int xuly(int i)
{
   int t=0;
        int l=i; int r=n;
        while (l<=r)
        {
            int m=(l+r)/2;
            if (s[m]-s[i-1]>k) r=m-1;
            else {t=m-i+1;l=m+1;}
        }
    return t;

}

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i]; a[0]=0;
    taomang();
    int maxi=0;
    for (int i=1;i<=n;i++)
        {
            int tmp=xuly(i);
            if (tmp>maxi) maxi=tmp;

        }
    cout<<maxi;
    return 0;
}
