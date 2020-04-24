#include <bits/stdc++.h>

using namespace std;



int t;
vector<int> v;

int main()
{
    int dem=0;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int64_t m,k;
        cin>>m>>k;
        int64_t sum=0;
        int64_t dungluong=1;
        while (m>0)
        {
            int64_t so_tab=m/dungluong;
            if (so_tab>k)
            {
                sum+=k;
                m=m-k*dungluong;
            }
            else
            {
                sum+=so_tab;
                m=0;
            }
            dungluong++;
        }
        cout<<sum<<endl;
     //  v.push_back(sum);
    }
  //  for (int i=0;i<=v.size()-1;i++) cout<<v[i]<<endl;
}
