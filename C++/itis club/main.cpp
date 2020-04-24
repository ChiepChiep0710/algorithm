#include <iostream>

using namespace std;

int main()
{
   int64_t q;
   cin>>q;
   for(int i=0;i<q;i++)
   {
       int64_t n,a,b;
       cin>>n>>a>>b;
       if(a*2>=b) cout<<(n/2)*b+(n%2)*a<<endl;
       else cout<<n*a<<endl;
   }
   return 0;
}
