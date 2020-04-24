#include <algorithm>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n; int a[1000];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    //vector <int> v(a,a+n);
   // vector <int>::iterator x,y;
   int x=lower_bound(a,a+n,5)-a-1;
    int y=upper_bound(a,a+n,5)-a-1;
  //  cout<<(x-v.begin())<<" "<<(y-v.begin())<<" ";
    //int xx=x-v.begin();
    cout<<a[x]<<" "<<a[y]<<" ";
    return 0;
}
