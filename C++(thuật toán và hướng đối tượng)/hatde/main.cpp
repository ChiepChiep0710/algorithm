#include <iostream>

using namespace std;

int main()
{
    int n;
    int64_t s=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int64_t x;
        cin>>x;
        s=s+x;
    }
    cout<<s%10000+7;
    return 0;
}
