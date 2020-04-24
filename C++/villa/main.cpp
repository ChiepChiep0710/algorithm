#include <iostream>

using namespace std;

int main()
{
    int n,a[100000],dem[10000];
    cin>>n;
    int dem=1;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=n;i>=1;i--)
    {

        if (a[i-1]>a[i]) {a[i-1]=dem; dem=0;
        else
        {
            dem++
        }

    }

}
