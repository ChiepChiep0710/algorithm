#include <iostream>
#include<math.h>
using namespace std;
int snt[100000];
void sangnt()
{
    long i,j;
    for (i=1; i<=100000; i++)
        snt[i]=1;
    snt[1]=0;
    i=2;
    while (i<=sqrt(100000))
    {
        while (snt[i]==0) i++;
        for (j=2; j<=100000/i; j++)
            snt[i*j]=0;
        i++;
    }
}

int main()
{
    int a[12],b[12];
    int n;
    sangnt();
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i]>>b[i];
   // cout<<n<<endl;
    for (int i=1;i<=n;i++)

    {
        int dem=0;
        //cout<<a[i]<<" "<<b[i]<<endl;
        for(int j=a[i];j<=b[i];j++)
            if (snt[j]) { dem++;}
        cout<<dem<<endl;

        if (dem==0) cout<<"-1";
        else

        {   // cout<<"1"<<"  ";
            for(int j=a[i];j<=b[i];j++)
            if (snt[j]) cout<<j<<" ";}

        cout<<endl;
    }
    return 0;
}
