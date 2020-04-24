#include<iostream>
#include<math.h>
using namespace std;
int cal(int64_t x)
{
    int s=0;
    while(x>0)
    {
        s=s+x%10;
        x=x/10;
    }
    return s;
}
int doben(int64_t x)
{
    if (x<10) return x;
    else return(doben(cal(x)));

}
int main()
{
    int n;
    int a[10000];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cout<<doben(a[i])<<endl;
    return 0;

}
