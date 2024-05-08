#include"SoTietKiem.h"
#include"KhongHan.h"

using namespace std;
void KhongHan::nhap() {
	SoTietKiem::nhap();
	/*cout << "Nhap lai suat: ";
	cin >> lai;*/
}
void KhongHan::xuat() {
	SoTietKiem::xuat();
	

}
double KhongHan::tienlai() {
	cout << "Lai suat hang thang (%): 0.01 " <<endl;
	return tien * 0.01 * n;
}