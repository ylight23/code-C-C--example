#include"SoTietKiem.h"
using namespace std;

void SoTietKiem::nhap() {
	cin.ignore();
	fflush(stdin);
	cout << "Nhap so CMND: ";
	
	getline(cin, CMND);
	fflush(stdin);
	cout << "Nhap ten khach hang: ";
	
	getline(cin, ten);
	cout << "Nhap ngay lap so: ";
	cin >> ngay;
	cout << "Nhap so tien muon gui (trieu): ";
	cin >> tien;
	cout << "Nhap thang gui lai: ";
	cin >> n;
	
	
}
void SoTietKiem::xuat() {
	cout << "So CMND: " << CMND<<endl;
	cout << "Ten khach hang: " << ten<<endl;
	cout << "Ngay lap so: " << ngay << endl;
	cout << "So tien da gui (trieu): " << tien << endl;
	cout << "So thang gui lai: " << n<<endl;
}
double SoTietKiem::tienlai() {
	return lai;
}