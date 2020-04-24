#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char xuly(int64_t n, int64_t l, string s)
{
    int64_t ll=l; int64_t i=0;
    while(n>ll) {ll=ll*2;}
    while(n>l)
    {
        ll=ll/2;
        if(n==ll+1) n=n-1;
        else if (n>ll) n=n-ll-1;
        
    }
   //if (n==0) return s[l-1];
    return s[n-1];

}
int main()
{
    string s; int64_t n;
   cin>>s>>n;
    cout<<xuly(n,s.size(),s);
}