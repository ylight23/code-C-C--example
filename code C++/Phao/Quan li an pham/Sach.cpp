#include "Sach.h"
#include"AnPham.h"
using namespace std;
Sach::Sach()
{
}

Sach::~Sach()
{
}
void Sach::nhap(){
	AnPham::nhap();
	cout<<"Nhap ten tac gia: ";
	cin>>tg;
	cout<<"Nhap so trang sach: ";
	cin>>page;
}
void Sach::xuat(){
	AnPham::xuat();
	cout<<"Ten tac gia: "<<tg<<endl;
	cout<<"So trang: "<<page<<endl;
	
}

