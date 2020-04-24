#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   /* string s;
      getline(cin,s);
     // s.clear();
      //cout<<s.empty();
      string s1="abc",s2="def";
     // s1.insert(2,s2);
     */string token;/*
      s1.replace(1,2,s2);
       cout<<s1.find(s2);*/
       string S = "Xin chao tat ca cac ban";
       stringstream ss(S);

        while (ss >> token) {
                  cout << token << endl;
        }
        return 0;
}

   // cout<<s1;



