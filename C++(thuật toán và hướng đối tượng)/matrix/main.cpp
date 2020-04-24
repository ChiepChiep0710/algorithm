#include <iostream>
#include<windows.h>
using namespace std;
const mn=200;
int a[mn][mn];
bool c[mn][mn];
void MPL(int n)
{
    memset(a, 0, sizeof(a));
    for(int i=0;i<=n+1;i++)
    {
        a[0][i]=-1;
        a[i][n+1]=-2;

    }
    for(int i=0;i<=n+1;i++)
    a[1][n/2+1]=1;
}
int xuly()
{
    if (a[x-1][y+1]==false)

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
