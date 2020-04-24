#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int64_t x,N,a[100];
 
int Fib(int N){
	a[1]=a[2]=1;
	for (int j=3; j<=N; j++){
		a[j]=a[j-1] + a[j-2];	
	}
    return 0;
}
 
int DtC(int64_t e,int64_t r){
	if (e == 1) return 1;
	if (e == 2) return 0;
	if (r<=a[e-2]) return DtC(e-2,r);
	if (r> a[e-2]){
		r-=a[e-2];
		return DtC(e-1,r);
	}
}
 
int main(){
	faster();
	cin >> x;
	Fib(93);
	int64_t k;
	for (int i=0; i<x; i++){
		cin >> N >> k;
		if (DtC(N,k)) cout << "A" << endl;
		else cout << "B" << endl;
	}
}