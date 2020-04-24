#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int res[101];
    int s,a,b,c,x,t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        cin>>s>>a>>b>>c;
        x=s/c;
        res[i]=(x/a)*b+x;

    }
    for (int i=1;i<=t;i++) cout<<res[i]<<endl;
    return 0;




}
