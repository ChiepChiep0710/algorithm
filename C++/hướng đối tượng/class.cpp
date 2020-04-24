#include<bits/stdc++.h>
using namespace std;
class nguoi
{
  protected:
	string ten;
	string sdt;
	string email;
   public:
   	   nguoi();
};
class khach: public nguoi
{
	friend class bangsapxep;
	protected:
		  static int makh;
		  int kieuph;
		  string mota;
		  int makhns;
	public:
		static up() {makh++;};
		khach();
		void init();
		void print();	
};
class phong{
	friend class bangsapxep;
	protected:
		  static int maph;
		  int maphns;
		  int kieuph;
		  int giatien;
	public:
		phong();
		static  up(){ maph++ ;};
		void init();
		void print();
		
};
nguoi::nguoi()
{
	ten="";
	email="";
	sdt="";
}
int khach::makh=1000;
khach::khach()
{
	kieuph=0;
	mota="";
}
void khach::init()

{
	
	makhns=makh;
	up();
	cout<<"khach hang "<<makhns;
	cout<<endl;
	cout<<"ten: "; cin>>ten; cout<<endl;
	cout<<"email: "; cin>>email; cout<<endl;
	cout<<"sdt: "; cin>>sdt; cout<<endl;
	do{
	cout<<"chon phong (1-don; 2-doi; 3-vip): ";
	cin>>kieuph; 
     }
	while(kieuph<0||kieuph>4);
	cout<<"them mo ta: ";
	fflush(stdin);
	cin>>mota;	cout<<endl;
}
void khach::print()
{
	cout<<"khach hang "<<makhns<<endl;
	cout<<"ten: "<<ten<<endl;
	cout<<"email: "<<email<<endl;
	cout<<"sdt: "<<sdt<<endl;
	cout<<"kieu phong: "<<kieuph<<endl;
	cout<<"*"<<mota<<endl;
	
}
int phong::maph=100;
phong::phong(){
	kieuph=0;
	giatien=0;
}
void phong::init(){
	
	
	maphns=maph;
	up();
	cout<<"loai phong (1-don; 2-doi; 3-vip): ";
	cin>>kieuph;
	cout<<endl;
	cout<<"gia cho thue: "; cin>>giatien; 
}
void phong::print()
{
	cout<<maphns<<endl;
	cout<<kieuph<<endl;
	cout<<giatien<<endl;
}
int main()
{
	int nk,np;
	cin>>nk>>np;
    vector<khach> k;
    vector<phong> p;
    khach kk;
    for(int i=0;i<nk;i++) 
    {
    
    	kk.init();
    	k.push_back(kk);
	}
	for(int i=0;i<nk;i++) k[i].print();
	return 0;
}
