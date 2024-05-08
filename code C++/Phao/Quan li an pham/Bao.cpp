#include<iostream>
#include "Bao.h"
#include"AnPham.h"
using namespace std;
Bao::Bao()
{
}

Bao::~Bao()
{
}
void Bao::nhap(){
	AnPham::nhap();
	cout<<"Nhap ngay phat hanh: ";
	cin>>ngay;
}
void Bao::xuat(){
	AnPham::xuat();
	cout<<"Ngay phat hanh: "<<ngay<<endl;
	
}
