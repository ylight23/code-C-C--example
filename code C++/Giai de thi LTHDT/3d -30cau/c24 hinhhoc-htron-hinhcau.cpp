#include<iostream>
#include<math.h>
using namespace std;
//class HinhHoc
//{
//public:
//    virtual float ChuVi() const=0;
//    virtual float DienTich() const =0;
//
//};
class HinhTron /*: virtual public HinhHoc*/
{
private:
    float r;
public:
	HinhTron(){
	}
    HinhTron(int _r):r(_r)
    {
        if (r<0) r=1;
    }
    virtual float ChuVi() const
    {
        return 2*3.14159*r;
    }
    virtual float DienTich() const
    {
        return 3.14159*r*r;
    }
    float DuongKinh() const
    {
        return 2*r;
    }
};

//che di phuong thuc DienTich bang viec thua ke private
class HinhCau: public HinhTron
{
    public:
    HinhCau(){
	}
    HinhCau(int _r):HinhTron(_r) {}
	//phuong thich DuongKing thi van de public
    using HinhTron::DuongKinh;
    float TheTich() const
    {
        return (float)4/3*pow(DuongKinh()/2,3)*3.14159;
    }
};
int main(){
	HinhTron *ht;
	ht=new HinhCau();
}
