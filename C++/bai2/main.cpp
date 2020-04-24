#include <iostream>
#include <algorithm>
using namespace std;

struct gio
{
	int s;
	int t;
} typedef timeh;

int cmp (timeh a, timeh b)
{
	if (a.t>b.t) return 0;
	return 1;
}

int main ()
{
	//IN;
	timeh h[100001];
	int n,k;
	cin>>n>>k;
	for (int i=0; i<n; i++)
	{
		cin>>h[i].s>>h[i].t;
	}
	//OUT;
	sort (h, h+n, cmp);
	if (k==1)
    {
        int maxs=0;
        for(int i=0;i<n;i++)
        {
            int ss=h[i].t-h[i].s;
            if (maxs<ss) maxs=ss;
        }
        cout<<maxs;
        return 0;
    }
    if (k==2)
    {
        int kq=-1; int res=-1;
        for(int i=0;i<n-1;i++)
        {
            int maxs=-1;
            for(int j=i+1;j<n;j++)
                if( h[j].s>h[i].t)
                {
                    int ss=h[j].t-h[j].s;
                    if(maxs<ss) maxs=ss;
                }
            if (maxs!=-1) kq=h[i].t-h[i].s+maxs;
            else kq=-1;
            if(res<kq) res=kq;

        }
        cout<<res;


    }


	return 0;
}
