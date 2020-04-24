#include <bits/stdc++.h>
#define FOR(i,a,b) for(long long i=a;i<=b;++i)
#define LL long long
using namespace std;
const int N = 1e5 +3;
int n;
LL a[N];
LL sum[N] ;
int main()
{
    //ios::sync_with_stdio(0) ;
   // cin.tie(0) ; cout.tie(0) ;
   // freopen("ch.inp","r",stdin);
    //freopen("ch.out","w",stdout);
    cin >> n ;
    FOR(i,1,n) {
        cin >> a[i] ;
        sum[i] = sum[i-1] + a[i] ;
    }
    int L = 2,R = n-1;
    LL kq = 0;
    FOR(len,1,n)
    {
        if(len==1) kq += 1ll*sum[n] ;
        else if(len==n) kq += 1ll*n*n* sum[n] ;
        else{
            LL tmp = sum[n] ;
            tmp = tmp + sum[R] - sum[L-1] ;
            L++,R--;
            tmp = tmp*(len-1) ;
            kq += len*len * tmp ;
        }
    }
    cout << kq;
}
