#include <iostream>
#include<math.h>
using namespace std;
int a[1000][1000];
int res[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    int b=a[1][3]-a[1][2];
    res[2]=(int)((a[2][3]-b)/2);
    res[1]=a[1][2]-res[2];
    for (int i=3;i<=n;i++) res[i]=a[i][i-1]-res[i-1];
    for (int i=1;i<=n;i++) cout<<res[i]<<" ";
    return 0;
}
