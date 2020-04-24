#include <iostream>

using namespace std;
char a[1000][1000];
int main()
{
    int n,k;
    cin>>n>>k;
    for (int i=1;i<=2*n;i++)
        for (int j=1;j<=2*n;j++) a[i][j]=' ';
    if (k==1)
    {
        a[1][n]='*';
        for (int i=2;i<=n-1;i++) {a[i][n-i+1]='*'; a[i][n+i-1]='*';}
        for (int i=1;i<=2*n-1;i++) a[n][i]='*';
        for (int i=1;i<=2*n;i++)
        {
            for (int j=1;j<=2*n;j++) cout<<a[i][j];
            cout<<endl;
        }

    }
    else
    {
        for(int i=1;i<=n;i++) {a[i][1]='*'; a[n][i]='*';}
        for (int i=2;i<=n-1;i++) a[i][i]='*';
         for (int i=1;i<=2*n;i++)
        {
            for (int j=1;j<=2*n;j++) cout<<a[i][j];
            cout<<endl;
        }
    }

    return 0;
}
