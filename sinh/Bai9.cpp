#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

char Xor(char a, char b)
{
	if (a==b)
		return '0';
	else
		return '1';
}

void Try(int i, string s)
{
	if (s.size()==i)
	{
		string gray="";
		gray += s[0];
		for (int i=1; i<s.size(); i++)
			gray += Xor(s[i-1],s[i]);
		cout << gray << " ";			
	}
	else 
	{
		Try(i,s+'0');
		Try(i,s+'1');
	}		
}

int main()
{
	faster();
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;		
		Try(n,"");
		cout << endl;
	}
	return 0;
}


//	num=(num>>1)^num;

