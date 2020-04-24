#include <iostream>

using namespace std;

int main()
{
    int dem[100000],a[100000];
    bool mark[100000];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) mark[i]=true;
    for(int i=1;i<=n;i++) dem[i]=1;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    if(mark[i])
    {
        for(int j=i+1;j<=n;j++)
            if (a[j]==a[i])
        {
            dem[i]++;
            mark[j]=false;
        }
    }
    for(int i=1;i<=n;i++)
    if (mark[i])

    {
         cout<<a[i]<<" "<<dem[i];
        cout<<endl;
    }
    return 0;

}
