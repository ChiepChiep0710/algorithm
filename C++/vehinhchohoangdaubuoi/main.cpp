#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k=n;
        for(int j=0;j<i;j++) {cout<<k<<" ";k--;}
        for(int j=i;j<n;j++) cout<<k<<" ";
        cout<<endl;
    }
    return 0;

}






