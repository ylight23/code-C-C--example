#include<iostream>
using namespace std;
#include"Giaodich.h"
void GiaoDich::nhap() {
	cout << "Nhap ma giao dich: ";
	cin >> ma;
	cout << "Nhap ngay giao dich: ";
	cin >> ngay;
	cout << "Nhap don gia: ";
	cin >> don;
	cout << "Nhap so luong: ";
	cin >> soluong;
}
void GiaoDich::xuat() {
	cout << "Ma giao dich: " << ma << endl;
	cout << "Ngay giao dich: " << ngay << endl;
	cout << "Don gia: " << don << endl;
	cout << "So luong: " << soluong << endl;

}
double GiaoDich::getTri() {
	return trigia;
}
char *GiaoDich::getID() {
	return ma;
}