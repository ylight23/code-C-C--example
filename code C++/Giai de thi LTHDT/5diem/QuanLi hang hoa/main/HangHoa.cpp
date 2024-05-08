#include"HangHoa.h"
using namespace std;

void HangHoa:: nhap() {

	cout << "Nhap ma hang: ";
	cin >> ma;
	cout << "Nhap ten hang: ";
	cin >> ten;
	cout << "Nhap so luong hang ton kho: ";
	cin >> soluong;
	cout << "Nhap don gia/hang: ";
	cin >> dongia;

}
void HangHoa::xuat() {
	cout << "Ten ma san pham: " << ma << endl;;
	cout << "Ten san pham: " << ten << endl;
	cout << "So hang con ton kho: " << soluong << endl;
	cout << "Gia 1 san pham: " << dongia << endl;
	cout << "Tri gia ton kho: " << getTri() << endl;
}

