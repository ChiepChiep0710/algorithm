#include <iostream>

using namespace std;

int main()
{
   int n=0;
   while(n<4)
   {
       n++;
       int m=1;
       while(m<5)
       {
           cout<<n<<":";
           int i=1;
           while(i<m) {cout<<i<<','; i++;}
           cout<<m;
           cout<<endl;
           m++;
            i=1;
       }
   }
}
