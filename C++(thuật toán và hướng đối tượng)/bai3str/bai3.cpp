#include <iostream>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    s=s+' ';
    vector <string> a;
    int m=0;
    for(int i=0;i<=s.size()-1;i++)
    {

        if (s[i]==' ')
            { string s1=s.substr(m,i-m);
                          a.push_back(s1);
                          m=i+1;
            }
    }
    for (int i=0;i<a.size();i++)
    {
        string s1=a[i];
        if (s1[0]>'a'&&s1[0]<'z') s1[0]=s1[0]-32;
        a[i]=s1;
    }
    //string res="";
    for(int i=0;i<a.size();i++) cout<<a[i];
   // cout<<res;
    return 0;

}
