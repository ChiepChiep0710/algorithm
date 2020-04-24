#include <iostream>

using namespace std;

int main()
{
    int n,k,res;
    cin>>n>>k;
    if (k>=n) {cout<<"10"; return 0;}
    int a=n%k;
   if (a)
   {
    if (a<=(int)(k/2)) res=(n/k)*10+5;
    else res=(n/k)*10+10;
    cout<<res;
   }
   else cout<<(n/k)*10;
    return 0;
}
