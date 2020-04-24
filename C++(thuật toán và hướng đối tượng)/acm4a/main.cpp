#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    int dem=0;
    for(int i=0;i<k;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int s=x+y+z;
        if (s>=2) dem++;
    }
    cout<<dem;
    return 0;

}
