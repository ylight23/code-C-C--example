#include<iostream>

#include "AnPham.h"
using namespace std;

void AnPham::nhap() {
	cout << "Nhap ma an pham: ";
	cin >> ma;
	cout << "Nhap nha xuat ban: ";
	cin >> nxb;
	cout << "Nhap so ban phat hanh: ";
	cin >> pub;
}
void AnPham::xuat() {
	cout << "Ma an pham: " << ma << endl;
	cout << "Nha xuat ban: " << nxb << endl;
	cout << "So ban phat hanh: " << pub << endl;
}