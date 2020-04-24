#include<bits/stdc++.h>
using namespace std;

class nguoi{
	protected:
		string ten;
		string email;
		string sdt;
	public:
		nguoi();
};

class khach: public nguoi{
	friend class bangSapXep;
	protected:
		static int maKH;
		int kieuPH;
		string moTa;
		int maKHns;
	public:
		static void up(){
			maKH++;
		};
		khach();
		void init();
		void ghiK();
		void print();
};

class phong{
	friend class bangSapXep;
	protected:
		static int maPH;
		int maPHns;
		int kieuPH;
		int giaTien;
	public:
		phong();
		static up(){
			maPH++;
		};
		void init();
		void ghiP();
		void print();
};

class bangSapXep{
	protected:
		vector<khach> kh;
		vector<phong> ph;
		vector<phong> xs;
	public:
		void KH();
		void PH();
		void SX();
		void ghiB();
		void print();
};

nguoi::nguoi(){
	ten="";
	email="";
	sdt="";
}

int khach::maKH = 100;

khach::khach(){
	kieuPH=0;
	moTa="";
}

void khach::init(){
	maKHns=maKH;
	cout<<"ten: ";
	getline(cin,ten);
	cout<<"email: ";
	getline(cin,email);
	cout<<"sdt: ";
	getline(cin,sdt);
	cout<<"chon phong (1-don; 2-doi; 3-VIP): ";
	cin>>kieuPH;
	cout<<"them mo ta: ";
	fflush(stdin);
	getline(cin,moTa);
}

void khach::ghiK(){
	ofstream out;
	out.open("KH.dat", ios::out|ios::app);
	out<<maKHns<<endl;
	out<<ten<<endl;
	out<<email<<endl;
	out<<sdt<<endl;
	out<<kieuPH<<endl;
	out<<moTa<<endl;
}

void khach::print(){
	cout<<maKHns<<endl;
	cout<<"ten: "<<ten<<endl;
	cout<<"email: "<<email<<endl;
	cout<<"sdt: "<<sdt<<endl;
	cout<<"kieu phong: "<<kieuPH<<endl;
	cout<<"*"<<moTa<<endl;
}

int phong::maPH = 100;

phong::phong(){
	kieuPH=0;
	giaTien=0;
}

void phong::init(){
	maPHns=maPH;
	cout<<"loai phong (1-don; 2-doi; 3-VIP): ";	
	cin>>kieuPH;
	cout<<"gia cho thue: ";
	cin>>giaTien;

}

void phong::ghiP(){
	ofstream out;
	out.open("PH.dat", ios::out|ios::app);
	out<<maPHns<<endl;
	out<<kieuPH<<endl;
	out<<giaTien<<endl;
}

void phong::print(){
	cout<<maPHns<<endl;
	cout<<kieuPH<<endl;
	cout<<giaTien<<endl;	
}

void bangSapXep::KH(){
	khach k;
	ifstream in;
	in.open("KH.dat");
	while(1){
	 	in>>k.maKHns;
	 	in.ignore();
	 	getline(in,k.ten);
	 	getline(in,k.email);
	 	getline(in,k.sdt);
	 	in>>k.kieuPH;
	 	in.ignore();
	 	getline(in,k.moTa);
	 	if(in.eof()) break;
	 	kh.push_back(k);
	 }
}

void bangSapXep::PH(){
	phong p;
	ifstream in;
	in.open("PH.dat");
	while(1){
	 	in>>p.maPHns;
	 	in>>p.kieuPH;
	 	in>>p.giaTien;
	 	if(in.eof()) break;
		ph.push_back(p);
	 }
	 for(int i=0; i<ph.size(); i++){
	 	for(int j=0; j<ph.size(); j++){
	 		if(ph[i].giaTien<ph[j].giaTien) swap(ph[i],ph[j]);
		 }
	 }
}

void bangSapXep::SX(){
	PH();
	KH();
	for(int i=0; i<kh.size(); i++){
		if(!ph.empty()){
			for(int j=0; j<ph.size(); j++){
				if(kh[i].kieuPH == ph[j].kieuPH){
					xs.push_back(ph[j]);
					ph.erase(ph.begin()+j);
					break;
				}
			}
		}
		else break;
	}

	for(int i=0; i<xs.size(); i++){
	 	xs[i].print();
	 }
	
	for(int i=0; i<kh.size(); i++){
		if(i<xs.size()){
			kh[i].print();
			xs[i].print();
			cout<<"---------------------------------------"<<endl;
		}
		else{
			cout<<"HET PHONG"<<endl;
			cout<<"---------------------------------------"<<endl;
		}
	}
}

int main(){
	bangSapXep p;
	p.SX();
}


