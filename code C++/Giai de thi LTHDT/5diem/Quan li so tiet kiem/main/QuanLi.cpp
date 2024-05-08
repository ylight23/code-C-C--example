#include"QuanLi.h"
using namespace std;

void QuanLi::Them() {
	SoTietKiem* stk;
	int ch;
	do {
		system("cls");
		cout << "1.Them ki han" << endl;
		cout << "2.Them khong ki han" << endl;
		cout << "3.Thoat" << endl;
		cout << "Nhap chon" << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			stk = new CoHan();
			stk->nhap();
			stk->setter(true);
			sotietkiem.push_back(stk);
			
			break;
		}
		case 2: {
			stk = new KhongHan();
			stk->nhap();
			stk->setter(false);
			sotietkiem.push_back(stk);
			
			break;
		}
		default:
			break;
		}
	}
	while (ch != 3);	
}
void QuanLi::Xuat() {
	system("cls");
	for (int i = 0; i < sotietkiem.size(); i++) {
		sotietkiem[i]->xuat();
		cout << "==============" << endl;
	}
}
void QuanLi::TinhLai() {
	system("cls");
	for (int i = 0; i < sotietkiem.size(); i++) {
		if (sotietkiem[i]->getter() == true) {
			sotietkiem[i]->xuat();
			cout<<"Tien lai co ki han (trieu): "<<sotietkiem[i]->tienlai()<<endl;
			
			cout << "==============" << endl;
		}
		else if (sotietkiem[i]->getter() == false) {
			sotietkiem[i]->xuat();
			cout<<"Tien lai khong ki han (trieu): "<<sotietkiem[i]->tienlai()<<endl;
			
			cout << "===============" << endl;
		}
	}
}
