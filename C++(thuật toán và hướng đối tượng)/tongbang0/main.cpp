#include <iostream>
#include<algorithm>

using namespace std;
int a[10000];
int binarySearch(int l, int r, int x)
{
  if (r >= l) {
    int mid = l + (r - l) / 2;
    if (a[mid] == x)
      return mid;


    if (a[mid] > x)
      return binarySearch(l, mid - 1, x);


    return binarySearch(mid + 1, r, x);
  }


  return -10000000;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int s=a[i]+a[j];

            int k=binarySearch(j+1,n-1,-s);
            if(k!=-10000000) {cout<<a[i]<<" "<<a[j]<<" "<<a[k]; cout<<endl;}

        }
    }

}
