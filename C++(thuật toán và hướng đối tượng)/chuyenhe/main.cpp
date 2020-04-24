#include <iostream>
#include<string.h>
using namespace std;
void chuyen(int n,int cs)
{

	int  r = 0;
    string s="";

	int i=0;
	while (n>0)
    {
		r = n % cs;
		if (r<10)
		{
			char c = '0' + r;
			s=s+c;
		}
		else
		{
			char c = 'A' + (r - 10);
			s=s+c;
		}
		i++;
		n = n/cs;
	}
	for (int i=s.size()-1;i>=0;i--) {
		cout<<s[i];
	}
}
int main()
{
    int n,cs;
    cin>>n>>cs;
    chuyen(n,cs);
}
