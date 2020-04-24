#include <iostream>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
    string s;
    int dem[10000];
    for (int i=0;i<10;i++)  dem[i]=0;
    getline(cin,s);
    vector <string> a;
    int m=1; int k=0;
    while (k<s.size())
    {

           while (s[k]==s[k+1])
            {
                k++;
                m++;
            }
             k++;
            string s1=s.substr(k-m,m);
                a.push_back(s1);
            dem[a.size()-1]=m;
            m=1;



    }
    for(int i=0;i<a.size();i++)
    {
        string stest=a[i];
        cout<<dem[i]<<stest[0];

    }

    return 0;
}
