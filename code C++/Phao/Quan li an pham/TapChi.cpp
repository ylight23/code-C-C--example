#include<iostream>
#include "TapChi.h"
#include"AnPham.h"
using namespace std;
TapChi::TapChi()
{
}

TapChi::~TapChi()
{
}
void TapChi::nhap(){
	AnPham::nhap();
	cout<<"Nhap so phat hanh: ";
	cin>>so;
	cout<<"Nhap thang phat hanh: ";
	cin>>thang;
}
void TapChi::xuat(){
	AnPham::xuat();
	cout<<"So phat hanh: "<<so<<endl;
	cout<<"Thang phat hanh: "<<thang<<endl;
}
