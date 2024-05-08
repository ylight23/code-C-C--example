#pragma once
#include"HangHoa.h"
using namespace std;
class DienMay : public HangHoa {
private:
	int baohanh;
	int congsuat;
	char loai[10];
public:
	/*DienMay() {
	}
	~DienMay() {
	}
	DienMay(char ma, char ten, int soluong, int dongia, double trigia, int baohanh, int congsuat, char loai) :HangHoa(ma, ten, soluong, dongia, trigia) {
		this->baohanh = baohanh;
		this->congsuat = congsuat;
		this->loai[10] = loai;
	}*/
	void nhap();
	void xuat();
	double getTri();
};
