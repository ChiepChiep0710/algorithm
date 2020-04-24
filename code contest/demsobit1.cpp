#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
string reve(string s)
{
    string ss = "";
    for (int i = s.size() - 1; i >= 0; i--)
        ss = ss + s[i];
    return ss;
}
string chuyencoso(int64_t x)
{
    string s = "";
    int t;
    do
    {
        t = x % 2;
        if (t == 1)
            s = s + '1';
        else
            s = s + '0';
        x = x / 2;

    } while (x > 0);
    s = reve(s);
    return s;
}
bool check(int64_t a1, int64_t x)
{
    int64_t x1=x-a1;
    int64_t t1=2*a1;
    if (x1%t1==0) return true;
    return false;
}
int xuly(string s, int64_t l, int64_t r)
{
    int n = s.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (pow(2, i) <= r && s[i] == '1')
        {
            for(int j=l;j<=r;j++)
            if (check(pow(2,i),j)) sum++;
        }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int64_t n, l, r;
        cin >> n >> l >> r;
        string s = chuyencoso(n);
        cout << xuly(s, l, r);
    }
    return 0;
}