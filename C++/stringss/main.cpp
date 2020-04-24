#include <iostream>
#include<string>
#include<vector>

using namespace std;
int xuly(string s)
{

    s[0]=s[0]+32;
    s=s+s[0];
    int n=s.size();    char b=s[n-1];
    for(int i=n-2;i>=0;i--)
        if(s[i]!=' ')
    {
        char tmp=s[i];
        s[i]=b;
        b=tmp;
    }
    s[0]=s[0]-32;

    s.erase(n-1);
    s=s+"ee";
    cout<<s<<endl;
    return 0;
}
int main()
{
      int t;
    cin >> t;
      cin.ignore();
    for(int q=0; q<t; q++)
    {
        string s;

        getline(cin, s);

        xuly(s);

    }
    return 0;

}
