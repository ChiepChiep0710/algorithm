#include <bits/stdc++.h>
#define M 1000000007

using namespace std;
typedef unsigned long long ll;

vector <string> split(const string& str)
{
    vector <string> tokens;
    istringstream tokenStream(str);
    string token;

    while (getline(tokenStream, token, ' '))
    {
        tokens.push_back(token);
    }

    return tokens;
}

ll mod(string& str, int m)
{
    int r = 0;
    for (int i = 0; i < str.length(); ++i)
        r = ((r*10)%m+ (str[i] - 48))% m;
    
    return r;
}

ll modExp(string& a, string& b)
{
    ll r = 1;

    ll base = mod(a, M);
    ll exp = mod(b, M-1);

    while (exp)
    {
        if (exp & 1)
            r = (r * base) % M;
        
        exp = exp >> 1;
        base = (base * base) % M;
    }

    return r;
}

int main()
{
    int t;
    cin >> t;
    string a, b;
    while (t--)
    {
        cin >> a >> b;
        printf("%lld\n", modExp(a, b));
    }

    return 0;
}

