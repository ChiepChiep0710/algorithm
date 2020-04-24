#include <iostream>
#include <fstream>
using namespace std;

struct SinhVien{
    char name[100];
    float diem;
    float tien;
};
SinhVien SV;
int ghiFile(){
    ofstream outSV("B17DCAT064.dat",ios::out);
    if(!outSV){
        cout<<"Error: Khong the mo file"<<endl;
        return 1;
    }
    int stop = 1;
    while(stop != 0){
        cout<<"Nhap ten,diem,tienhoc"<<endl;
        cin>>SV.name>>SV.diem>>SV.tien;
        outSV<<SV.name<<" "<<SV.diem<<" "<<SV.tien;
        cout<<"Nhap 1 de tiep tuc , 0 de thoat"<<endl;
        cin>>stop;
    }
}
int docFile(){
    ifstream inSV("B17DCAT064.dat",ios::in);
    if(!inSV){
        cout<<"Error";
        return 1;
    };
    cout<<"Ten,diem,tienhoc"<<endl;
    while(!inSV.eof()){
        inSV>>SV.name>>SV.diem>>SV.tien;
        //if(!inSV.eof()){
            cout<<SV.name<<" "<<SV.diem<<" "<<SV.tien<<endl;
       //}
    }

    return 0;
}

int main(){
    ghiFile();
    docFile();
}
