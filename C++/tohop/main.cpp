#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int n;
double a;

void lamtron(double x)
{
	  double k=x*pow(10,n+1);

		int m=(int)k%10;
		if (m>=5)
		{
			k=(int)k/10+1;
			double x1=k/(pow(10,n));
			cout<<x1;
		}
		else
		{
			k=k/10;
			double x1=k/(pow(10,n));
			cout<<x1;
		}
}
int main()
{
	freopen("lamtron.inp","r",stdin);
	freopen("lamtron.out","w",stdout);
	cin>>n;
	cin>>a;
	lamtron(a);
}

