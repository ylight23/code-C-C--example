#pragma once
#include"HangHoa.h"
using namespace std;
class MayMac : public HangHoa {
private:
	char nhasx[20];
	char ngaynk[20];
public:
	void nhap();
	void xuat();
	double getTri();
	/*MayMac() {
	}
	~MayMac() {
	}
	MayMac(char ma, char ten, int soluong, int dongia, double trigia, char nhasx, char ngaynk) :HangHoa(ma, ten, soluong, dongia, trigia) {
		this->nhasx[20] = nhasx;
		this->ngaynk[20] = ngaynk;

	}*/
};
