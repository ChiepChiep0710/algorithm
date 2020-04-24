#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;
    int t;
    cin>>t;
    while (t--)
    {
        int d,v,l,r; int tmp1,tmp2,s;
        cin>>d>>v>>l>>r;
        tmp2=r/v;
        s=d/v;
        if (l%v==0) tmp1=l/v;
        else tmp1=l/v+1;
        int dem=s-tmp2+tmp1-1;
        a.push_back(dem);


    }
    for (int i=0;i<a.size();i++) cout<<a[i]<<endl;
    return 0;
}
