#include <iostream>

using namespace std;

int main()
{
   int n;
	float thue,luong;
	cin>>n;
	if (n==15)
	{
		thue=n*0.3;
		luong=n-thue;
		cout<<"thue thu nhap: "<<thue<<" "<< "luong thuc su nhan duoc: "<<luong;
	}
	else if (n>=7&&n<15)
	{
		thue=n*20/100;
		luong=n-thue;
		cout<<"thue thu nhap: "<<thue<<" "<<" luong thuc su nhan duoc: %"<<luong;
	}
	else if (n<7)
	{
		thue=n*10/100;
		luong=n-thue;
		cout<<"thue thu nhap: "<<thue<<" "<<" luong thuc su nhan duoc: "<<luong;
	}
}
