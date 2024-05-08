#include<iostream>
#include"Vang.h"
#include"Giaodich.h"
//using namespace GiaoDich;
using namespace std;
void Vang::nhap() {
	GiaoDich::nhap();
	cout << "Nhap loai vang: ";
	cin >> loaivang;
}
double Vang::getTri() {
	return soluong * don;
}
void Vang::xuat() {
	GiaoDich::xuat();
	cout << "Loai vang: " << loaivang<<endl;
	cout << "Tri gia: " << getTri()<<endl;
}