#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int k=n/9;
    for(int i=k;i>=0;i--)
    {
        int q=n-9*i;
        if (q%4==0)
        {
            for(int j=0;j<q/4;j++) cout<<4;
            for(int j=0;j<i;j++) cout<<9;
            return 0;

        }

    }
   cout<<-1;

    return 0;
}
