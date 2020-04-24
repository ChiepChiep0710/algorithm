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
    //cout<<a.size();
    int t=a.size();
    for(int i=0;i<=t-1;i++)
    {
       string st=a.back();
        cout<<st<<" ";
        a.pop_back();
    }

    return 0;


}
