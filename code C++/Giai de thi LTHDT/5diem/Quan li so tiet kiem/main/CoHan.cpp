#include"CoHan.h"
#include"SoTietKiem.h"

using namespace std;
void CoHan::nhap() {
	SoTietKiem::nhap();
	cout << "Nhap ki han (so thang) : ";
	cin >> ki_han;
	
}
void CoHan::xuat() {
	SoTietKiem::xuat();
	cout << "Ki han (thang): "<<ki_han<<endl;
	//cout<<"Tong tien lai"

}
double CoHan::tienlai() {
	if (n > ki_han) {
		if ( ki_han == 3) {
			cout << "Lai suat: 0.03 (%)" << endl;
			return tien * n * 0.03;
		}
		else if (ki_han == 6) {
			cout << "Lai suat: 0.05 (%)" << endl;
			return tien * n * 0.05;
		}
		else if ( ki_han == 12) {
			cout << "Lai suat: 0.06 (%)" << endl;
			return tien *n * 0.06;
		}
	}
	else if (n <= ki_han) {
		cout << "Chua du thang lay lai" << endl;
		return 0; //vuot qua ki han nen ko tang lai
	}
}