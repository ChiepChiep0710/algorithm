#include <bits/stdc++.h> 
#define MAX 2000001  
#define p 1000000007
typedef long long ll;
using namespace std;   

ll minCost(ll arr[], ll n) { 

	priority_queue<ll, vector<ll>, greater<ll> > pq(arr, arr + n);

    ll res = 0;   
   
    while (pq.size() > 1) { 
     
        ll first = pq.top(); //lay do dai soi thu nhat
        pq.pop(); //loai soi day ra khoi hang doi
        ll second = pq.top(); //lay do dai soi day thu 2
        pq.pop(); //loai soi day ra khoi hang doi  
		ll tg=(first + second) % p;
        res = (res + tg) % p; //lay hai soi noi voi nhau
        pq.push(tg); //dua vao theo thu tu uu tien
    }   
    return res; 
}   
int main(void){
	ll T, n, *A; 
		cin>>n;
		A = new ll[n];
		for(int i=0; i<n; i++){
			cin>>A[i];
		}
		
		cout<<minCost(A,n);
	
}


















/*#include <iostream>
using namespace std;
int main()
{
	int64_t n,y,k;
	double x;
	cin >> n >> x >> y >> k; 
	int count=0;
	while (count <= 600)
	{
		count++;
		n=n-y;
		if (count == k) {
			if (n<=0) {
				cout << 0 << endl << 0;
				return;
			}
			cout << n << endl;
		}
		n=n*(1+x/1200);
	}
	if (n<=0) cout << 0;
	else cout << -1;
}*/