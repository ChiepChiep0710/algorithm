#include <iostream>
#include <fstream> // thư viện xử lý file
#include <algorithm>
using namespace std;

struct dathuc{
    int n;
    int a[31];
};

dathuc t[1000];
int ghiFile(int dem){ // dem là số phần tử của của file kết quả
    ofstream outdt("dathucout.txt",ios::out); // khai báo file để in kết quả, outdt tao gọi là biến file :D
    if(!outdt){
        cout<<"Error: Khong the mo file"<<endl;
        return 1;
    }
    for(int i=1;i<=dem;i++) // in kết quả ra file
    {
        outdt<<t[i].n<<endl;
        for(int j=0;j<=t[i].n;j++) outdt<<t[i].a[j]<<" ";
        outdt<<endl;
    }
    return 0;
}
int docFile(){
    ifstream indt("dathucin.txt",ios::in); // khai báo file và biến file nhập vào
    if(!indt){
        cout<<"Error";
        return -1;
    };
    int dem=0;
    //cout<<"Ten,diem,tienhoc"<<endl;
    while(!indt.eof()){  // khi mà chưa chạm đến đáy của file
        dem++;
        indt>>t[dem].n;
            for(int i=0;i<=t[dem].n;i++) indt>>t[dem].a[i];
       //}
    }

    return dem-1;
}

int main(){
    //int x=docFile();
   /* for(int i=1;i<=x;i++) 
    {
        cout<<t[i].n<<endl;
        for(int j=0;j<=t[i].n;j++) cout<<t[i].a[j]<<" ";
        cout<<endl;
    }*/ 
    //ghiFile(x);
    cout<
    return 0;
}
