#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int xl(int n)
{
	int a[1000];
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return a[n-2];
}

int main()
{
	int n,m;
	cout<<"nhap vao vi tri Fibonacci can in ra: ";
	cin>>n;
	m=xl(n);
	cout<<"So fibonacci thu n la: "<<m;
return 0;
}