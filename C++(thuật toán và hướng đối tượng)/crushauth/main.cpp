#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int64_t t;
    int64_t a[10000];
    cin>>t;
    for (int i=1;i<=t;i++) cin>>a[i];
    for (int i=1;i<=t;i++)
    {
        int64_t kq=0;
      //  int m=2*a[i];
        for(int j=2;j<=(int)sqrt(2*a[i]);j++)
        if ((2*a[i])%j==0)
        //for (int k=j;k<=2*a[i];k++)
        {
            //float b=(float)(j+(int)(2*a[i]/j)-1);
            //b=(float)(b/2);
            //int c=(int)b;

           if ((j+(int)(2*a[i]/j)-1)%2==0) kq++  ;
           //if ((j+k)*(k-j+1)==2*a[i]) kq++;
        }
        cout<<kq<<endl;

    }

}
