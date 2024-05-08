#include"QuanLi.h"
#include<iostream>
#include<string.h>
#include<vector>
#include"Giaodich.h"
using namespace std;

void QuanLi::Them() {
	GiaoDich* ql;
	int ch;
	do {
		system("cls");
		cout << "1.Them giao dich vang" << endl;
		cout << "2.Them giao dich tien te" << endl;
		cout << "3.Quay lai" << endl;
		cout << "Moi chon: ";
		cin >> ch;
		switch (ch) {
			case 1: {
				ql = new Vang();
				ql->nhap();
				ql->setter(true); //danh dau Vang =true
				giaodich.push_back(ql);
				break;
			}
			case 2: {
				ql = new TienTe();
				ql->nhap();
				ql->setter(false);//danh dau Tien =false
				giaodich.push_back(ql);
				//tiente.push_back(ql);
				break;
			}
			case 3: {
				break;
			}
		}
	} 
	while (ch != 3);
	
}
void QuanLi::Xuat() {
	system("cls");
	cout << "==========Danh Sach============" << endl;
	for (int i = 0; i < giaodich.size(); i++) {
		giaodich[i]->xuat();
		cout << "==================" << endl;
	}
}
void QuanLi::Sua() {
	char s[20];

	int foundID = 0;
	system("cls");
	cout << "Nhap ma giao dich can sua: ";
	cin >> s;
	for (int i = 0; i < giaodich.size(); i++) {
		if (strcmp(giaodich[i]->getID(), s) == 0) {
			foundID = 1;
			giaodich[i]->xuat();
			cout << "+++++++++++" << endl;
			giaodich[i]->nhap();
			cout << "=======Sau khi sua=======" << endl;
			giaodich[i]->xuat();
		}
	}
	if (foundID == 1) {
		cout << "Sua thanh cong!!" << endl;
		system("pause");

	}
	else if (foundID == 0) {
		cout << "Khong thanh cong!!" << endl;
		system("pause");
	}
}
int QuanLi::Xoa() {
	char s[20];
	system("cls");
	cout << "Nhap ma can xoa: ";
	cin >> s;
	int foundID = 0;
	for (int i = 0; i < giaodich.size(); i++) {
		int vt;
		if (strcmp(giaodich[i]->getID(), s) == 0) {
			//if(hanghoa[i]->getID().compare(s)==0){

			foundID = 1;
			vt = i;
			cout << "--------------------------------" << endl;
			cout << "Thong tin muon xoa" << endl;
			giaodich[i]->xuat();
			giaodich.erase(giaodich.begin() + vt);
		}
	}
	if (foundID == 0) {
		cout << "Khong ton tai" << endl;
		system("pause");
		return 0;
	}
	else if (foundID == 1)
		cout << "Xoa thanh cong" << endl;
		system("pause");
		return 1;

}
double QuanLi::TrungBinh() {
	double SUM=0;
	int dem = 0;
	system("cls");
	for (int i = 0; i < giaodich.size(); i++) {
		if (giaodich[i]->getter() == false) {
			dem++;
			SUM = SUM + giaodich[i]->getTri();
			//SUM = SUM / dem;
		}
		
	}
	cout << "dem =" << dem<<endl;
	cout << "Trung binh tri gia cua cac tien te: " << SUM/dem<<endl;
	//system("pause");
	return SUM;
	
}
void QuanLi::Tim() {
	char s[20];

	int foundID = 0;
	system("cls");
	cout << "Nhap ma giao dich can tim: ";
	cin >> s;
	for (int i = 0; i < giaodich.size(); i++) {
		if (strcmp(giaodich[i]->getID(), s) == 0) {
			foundID = 1;
			giaodich[i]->xuat();	
		}
	}
	if (foundID == 1) {
		cout << "Tim thanh cong!!" << endl;
		system("pause");

	}
	else if (foundID == 0) {
		cout << "Tim khong thanh cong!!" << endl;
		system("pause");
	}
}