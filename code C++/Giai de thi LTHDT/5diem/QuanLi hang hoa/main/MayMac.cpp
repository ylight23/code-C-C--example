#include"MayMac.h"
#include"HangHoa.h"
#include<iostream>
using namespace std;
void MayMac::nhap() {
	HangHoa::nhap();
	cout << "Nhap nha san xuat: ";
	cin >> nhasx;
	cout << "Nhap ngay nhap kho: ";
	cin >> ngaynk;
}
double MayMac::getTri() {
	return soluong * dongia * (1 + 0, 1);
}
void MayMac::xuat() {
	HangHoa::xuat();
	cout << "Nha san xuat: " << nhasx << endl;
	cout << "Ngay nhap kho: " << ngaynk << endl;
}
