#include <iostream>

using namespace std;

int main()
{
    int64_t n,c=0;
    cin>>n;
    while (n)
    {
        int a=n%10;
        if (a==4||a==7) c++;
        n=n/10;
    }
    if (c==4||c==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}
