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
    string res;
    int dem=0;
    for(int i=0;i<=s.size()-1;i++)
    {

        if (s[i]==' ')
            {
                string s1=s.substr(m,i-m);
                        if (s1.size()>dem)
                        {
                            dem=s1.size();
                            res=s1;
                        }
                m=i+1;

            }
    }
    cout<<res;
    return 0;

    }
