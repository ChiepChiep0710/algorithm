/*
    Class=struct+hàm xử lý
    Định nghĩa class
    class< tên lớp>
    {
    privates: <khai bái các thành phần riêng>
    protected:
    <khai báo các thành phần được bảo vệ>
    public
    <khai báo các thành phần công cộng>
    };
    thành phần
    *) thuộc tính (data members)
    *) phương thức ()
*/
/*
#include <iostream>
using namespace std;
// nhập thời gian : giờ phút giây>
class Time
{
    private: 
        int gio,phut,giay;    //thuoc tinh
    public:
            void nhap();   //phuong thuc
            void hienthi24(); //
            int getgio(){return gio;} // lấy giờ ra;
            void setgio(int);
};
void Time::setgio(int g)
{
    gio= (g<24 && g>=0)?g:0;
}
void Time::nhap()
{
    cout<<"gio ="; cin>>gio;
    cout<<"phut ="; cin>>phut;
    cout<<"giay =";cin>>giay;

}
void Time::hienthi24()
{
    cout<<gio<<":"<<phut<<":"<<giay;

}
int main()
{
    Time t; // doi tuong t
     t.nhap(); 
     // t.gio: ko truy cập được
     cout<<"gio vua nhap : "; t.hienthi24();

} */
#include <iostream>
#include <string.h>
using namespace std;
class Phanso
{
    private:
          int tu,mau;
    public:
        void nhap();
        void Hienthi() {cout<<tu<<"/"<<mau;}
        Phanso operator *(Phanso p);

}
Phanso Phanso::operator *(Phanso p)
{
    Phanso kq;
    kq.tu=tu*p.tu;
    kq.mau=mau*p.mau;
    return kq;
}



