#include"QuanLiHH.h"
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void QuanLi::ThemSP() {
	HangHoa* hh;
	int ch;
	do {
		system("cls");
		cout << "1.Nhap thuc pham" << endl;
		cout << "2.Nhap dien may" << endl;
		cout << "3.Nhap may mac" << endl;
		cout << "4.Thoat" << endl;
		cout << "Hay chon: ";
		cin >> ch;
		switch (ch) {
		case 1: {
			hh = new ThucPham();
			hh->nhap();
			hanghoa.push_back(hh);
			break;
		}
		case 2: {
			hh = new DienMay();
			hh->nhap();
			hanghoa.push_back(hh);
			break;
		}
		case 3: {
			hh = new MayMac();
			hh->nhap();
			hanghoa.push_back(hh);
			break;
		}
		case 4:
			break;
		}
	} while (ch != 4);
}
void QuanLi::XuatSP() {
	system("cls");
	for (int i = 0; i < hanghoa.size(); i++) {
		hanghoa[i]->xuat();
		cout << "=================" << endl;
	}

}
void QuanLi::SuaSP() {
	int foundID = 0;
	//sua theo ma hang
	char s[20];
	system("cls");
	cout << "Nhap ma hang can sua:";
	cin >> s;
	for (int i = 0; i < hanghoa.size(); i++) {
		if (strcmp(hanghoa[i]->getID(), s) == 0) {
			foundID = 1;
			hanghoa[i]->xuat();
			cout << "------------" << endl;
			hanghoa[i]->nhap();
			cout << "==============" << endl;
			cout << "Sau khi sua" << endl;
			hanghoa[i]->xuat();

		}
	}
	if (foundID == 1) {
		cout << "===========" << endl;
		cout << "Sua thanh cong!!!!" << endl;
		system("pause");

	}
	else {
		cout << "==========" << endl;
		cout << "Khong ton tai!!!! " << endl;
		system("pause");
	}
}
int QuanLi::XoaSP() {
	char s[20];
	system("cls");
	cout << "Nhap ma can xoa: ";
	cin >> s;
	int foundID = 0;
	for (int i = 0; i < hanghoa.size(); i++) {
		int vt;
		if (strcmp(hanghoa[i]->getID(), s) == 0) {
			//if(hanghoa[i]->getID().compare(s)==0){

			foundID = 1;
			vt = i;
			cout << "--------------------------------" << endl;
			cout << "Thong tin sp muon xoa" << endl;
			hanghoa[i]->xuat();
			hanghoa.erase(hanghoa.begin() + vt);
		}
	}
	if (foundID == 0) {
		cout << "Khong ton tai" << endl;
		system("pause");
		return 0;
	}
	else if (foundID == 1) {
		cout << "Xoa thanh cong" << endl;
		system("pause");
		return 1;
	} 
}
void QuanLi::TonKhoMax() {
	int vt = 0;
	double max=0;
	system("cls");
	cout << "Hang hoa co gia tri ton kho lon nhat:" << endl;
	for (int i = 0; i < hanghoa.size(); i++) {

		if (max < hanghoa[i]->getTri()) {
			max = hanghoa[i]->getTri();
			vt = i;
		}
	}
	hanghoa[vt]->xuat();
	system("pause");
}