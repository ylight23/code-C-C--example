#include"ThucPham.h"
#include"HangHoa.h"
#include<iostream>
using namespace std;


void ThucPham::nhap() {
	HangHoa::nhap();
	cout << "Nhap ngay san xuat: ";
	cin >> ngaysx;
	cout << "Nhap ngay het han: ";
	cin >> ngayhh;
	cout << "Nhap hang cung cap: ";
	cin >> nhacc;

}
double ThucPham::getTri() {
	return soluong * dongia * (1 + 0, 05);
}
void ThucPham::xuat() {
	HangHoa::xuat();
	cout << "Ngay san xuat - het han: " << ngaysx << " - " << ngayhh << endl;
	cout << "Nha cung cap: " << nhacc << endl;

}