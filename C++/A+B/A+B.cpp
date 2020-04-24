#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    double sum=0;
    double count_1=0;
    double k;
    while (k >0)
    {
        cin>>k;
        if (k <=10 && k>0)
        {
            sum+=k;
            count_1++;
        }
    }
   double ARAVAGE=sum/count_1;
   cout<<fixed<<setprecision(2)<<ARAVAGE;
}
