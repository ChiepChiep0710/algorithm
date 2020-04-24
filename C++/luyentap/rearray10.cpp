#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void xuly(string s)
{
      vector<int> pos(s.length()+1,0);
      pos[s.length()]=s.length();
       for(int i=s.length()-1;i>=0;i--)
         if(s[i]=='I') pos[i]=i;
         else pos[i]=pos[i+1];
    vector<int> cans;
    int t=10;
    for(int i=1;i<10;i++) cans.push_back(i);
    for(int i=0;i<=s.length();i++)
    {
        int l=pos[i]-i+1;
        if(cans.size()==0||l>cans.size()) cans.push_back(t++);
        cout<<cans[l-1];
        cans.erase(cans.begin()+l-1);
    } 
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        xuly(s);
    }
    return 0;
}