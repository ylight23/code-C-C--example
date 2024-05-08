#include<iostream>

#include "AnPham.h"
using namespace std;
AnPham::AnPham()
{
}

AnPham::~AnPham()
{
}
void AnPham::nhap(){
	cout<<"Nhap ma an pham: ";
	cin>>ma;
	cout<<"Nhap nha xuat ban: ";
	cin>>nxb;
	cout<<"Nhap so ban phat hanh: ";
	cin>>pub;
}
void AnPham::xuat(){
	cout<<"Ma an pham: "<<ma<<endl;
	cout<<"Nha xuat ban: "<<nxb<<endl;
	cout<<"So ban phat hanh: "<<pub<<endl;
}
//char *AnPham::getID() {
//	return ma;
//}
