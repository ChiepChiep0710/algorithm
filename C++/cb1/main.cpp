#include <iostream>

using namespace std;

int main()
{
   bool check[1000];
   string s; int kt=1;
   for(int i=97;i<=122;i++) check[i]=true;
   cin>>s; int n=s.size(); int maxs=0;
   for(int i=0;i<n;i++)
   if (check[s[i]]==true)
   {
        check[s[i]]=false;
    }
    else
    {
        int kt2=0;
       for(int j=97;j<=122;j++)
        if (check[j]==true)
       {
           char c=j;
           s[i]=c;
           check[j]=false;
             kt2=1;
           break;
       }
     if (kt2==0) {kt=0;break;}
    }

    if(kt==1) cout<<s;
    else cout<<"IMPOSSIBLE";

}
