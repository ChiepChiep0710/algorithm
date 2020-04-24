#include <iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;
int chuyendoi(string s)
{
    int n;
    int a[10000]; int res=0; n=s.size();
    for (int i=0;i<n;i++) a[i]=s[i]-48;
    for(int i=0;i<n;i++) res=res+a[i]*pow(2,n-i-1);
    return res;


}

int main()
{
    vector <string> t;
   for(int i=1;i<26;i++)
   {
      string s;
      cin>>s;
      t.push_back(s);
   }
   cout<<endl;
   for(int i=0;i<25;i++)
   {
         char c=chuyendoi(t[i]);
         cout<<c;
   }


    return 0;
}
