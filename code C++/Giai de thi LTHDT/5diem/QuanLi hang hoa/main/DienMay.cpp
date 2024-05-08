#include"HangHoa.h"
#include"DienMay.h"
#include<iostream>
using namespace std;

void DienMay::nhap() {
	HangHoa::nhap();
	cout << "Nhap thoi gian bao hanh: ";
	cin >> baohanh;
	cout << "Nhap cong suat may (W): ";
	cin >> congsuat;
	cout << "Nhap chung loai: ";
	cin >> loai;

}
double DienMay::getTri() {
	return soluong * dongia * (1 + 0, 1);
}
void DienMay::xuat() {
	HangHoa::xuat();
	cout << "Thoi gian bao hanh: " << baohanh << endl;
	cout << "Cong suat may: " << congsuat << endl;
	cout << "Hang sang pham: " << loai << endl;

}