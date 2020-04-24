#include <iostream>
#include <math.h>
using namespace std;
int Check1(long long n){
	int dem=0;
	for(int i=2;i<=(sqrt(n));i++){
		if (n%i==0) dem++;
	}
	if (dem==0) return 1;
	else return 0;
}
void Check2(long long n){
	for (int i=2;i<=n;i++){
		if (Check1(i)) cout<<i<<" ";
		else for(int j=2;j<=sqrt(n);j++){
			if (i%j==0) {
				cout<<j<<" ";
				break;
			}
		}
	} 
}
int main(){
	int T; cin>>T;
	long long n;
	while (T>0){
		cin>>n; cout<<"1 ";
		Check2(n);
		cout<<endl;
		T--;
	}
}  
