#include <iostream>
#include"Tiente.h"
#include"Giaodich.h"
using namespace std;
void TienTe::nhap() {
	GiaoDich::nhap();
	cout << "Nhap loai tien te: ";
	cin >> loaitien;
	cout << "Nhap ti gia: ";
	cin >> tigia;
}
double TienTe::getTri() {
	return don * soluong * tigia;
}
void TienTe::xuat() {
	GiaoDich::xuat();
	cout << "Loai tien: " << loaitien << endl;
	cout << "Ti gia: " <<tigia<< endl;
	cout << "Tri gia: " << getTri()<<endl;
}