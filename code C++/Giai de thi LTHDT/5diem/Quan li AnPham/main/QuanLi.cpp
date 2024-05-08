#include "QuanLi.h"
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void QuanLi::Them() {
	AnPham* ap;
	int ch;

	do {
		system("cls");
		cout << "1.Them sach " << endl;
		cout << "2.Them tap chi" << endl;
		cout << "3.Them bao" << endl;
		cout << "4.Thoat" << endl;
		cout << "Hay chon: ";
		cin >> ch;
		switch (ch) {
		case 1: {
			ap = new Sach();
			ap->nhap();
			anpham.push_back(ap);

			break;
		}
		case 2: {
			ap = new TapChi();
			ap->nhap();
			anpham.push_back(ap);
			break;
		}
		case 3: {
			ap = new Bao();
			ap->nhap();
			anpham.push_back(ap);
			break;
		}
		case 4:
			break;
		}
	} while (ch != 4);
}
void QuanLi::Xuat() {
	system("cls");
	cout << "=======Danh sach=======" << endl;
	for (int i = 0; i < anpham.size(); i++) {
		anpham[i]->xuat();
		cout << "===================" << endl;
	}
}
void QuanLi::Tim() {
	char s[20];
	int vt;
	int foundID = 0;
	system("cls");
	cout << "Nhap ma an pham can tim: ";
	cin >> s;
	int dem = 0;
	for (int i = 0; i < anpham.size(); i++) {
		//cout<<anpham[i]->getID();
		if (strcmp(anpham[i]->getID(), s) == 0) {
			//if(anpham[i]->checkID(s))
			foundID = 1;
			//vt=i;
			cout << "=====Thong tin tim kiem=====" << endl;
			anpham[i]->xuat();
		}
	}

	if (foundID == 0) {
		cout << "Khong tim thay" << endl;
		system("pause");
	}
	else if (foundID == 1) {
		cout << "Tim thanh cong" << endl;
		system("pause");
	}
	
	//system("pause");
}