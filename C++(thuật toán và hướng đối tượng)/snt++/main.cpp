#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n+1];
    int dem=0, t;
    for(int i=2; i<=n; i++) a[i] = 1;
    for(int i=2; i<=n; i++)
    {
        if(a[i] == 1)
        {
            dem++;
            if(dem == k){
                 t=i;
                 break;
            }
            for(int j=i*i; j<=n; j+=i){
                if(a[j]==1){
                    dem++;
                    a[j]=0;
                    if(dem == k){
                        t=j;
                        break;
                    }
                }

            }
        }
    }
    cout << t;
}
