#include <iostream>
#include"QuanLiHH.h"
#include"HangHoa.h"
#include"DienMay.h"
#include"MayMac.h"
#include"ThucPham.h"
#include<vector>
using namespace std;

void menu(QuanLi hang_hoa) {
	int ch;
	do {
		system("cls");
		cout << "1.Them hang hoa" << endl;
		cout << "2.Xuat hang hoa" << endl;
		cout << "3.Sua hang hoa " << endl;
		cout << "4.Xoa hang hoa" << endl;
		cout << "5.Tim gia tri ton kho max" << endl;
		cout << "6.Thoat" << endl;
		cout << "Moi chon: ";
		cin >> ch;
		switch (ch) {
		case 1: {
			hang_hoa.ThemSP();
			break;
		}
		case 2: {
			hang_hoa.XuatSP();
			system("pause");
			break;
		}
		case 3: {
			hang_hoa.SuaSP();

			break;
		}
		case 4: {
			hang_hoa.XoaSP();
			break;
		}
		case 5: {
			hang_hoa.TonKhoMax();
			break;
		}
		default:
			break;
		}
	} while (ch != 6);

}
int main()
{
	QuanLi a;
	menu(a);
	system("pause");
	return 0;
}

