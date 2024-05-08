#include <iostream>
#include"AnPham.h"
#include"Sach.h"
#include"TapChi.h"
#include"Bao.h"
#include"QuanLi.h"
#include<string.h>
using namespace std;

void menu(QuanLi ql) {
	int ch;

	do {
		system("cls");
		cout << "1.Them" << endl;
		cout << "2.Xuat" << endl;
		cout << "3.Tim" << endl;
		cout << "4.Thoat" << endl;
		cout << "Hay chon! : ";
		cin >> ch;
		switch (ch) {
		case 1: {
			ql.Them();

			break;
		}
		case 2: {
			ql.Xuat();
			system("pause");
			break;
		}
		case 3: {
			ql.Tim();
				//system("pause");
			break;
		}
		case 4:
			break;
		}
	} 
	while (ch != 4);
}
int main() {
	QuanLi a;
	menu(a);

	return 0;
	
}
