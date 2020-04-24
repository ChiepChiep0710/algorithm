#include <iostream>
#include <math.h>

using namespace std;

int divSum(int x)
{
    int d, r = 1;
    int q;
    int i=2;
    while (x>1)
    {
        d = 0;
        while (x%i==0)
        {
            d++;
            x/=i;
        }
      
        r = r*(1-powf(i,d+1))/(1-i);
        i++;
    }

    return r;
}

int main()
{
    int n,a;

    cin >> n;
    while (n--)
    {
        cin >> a;
        cout << divSum(a) - a << endl;
    }

    return 0;
}