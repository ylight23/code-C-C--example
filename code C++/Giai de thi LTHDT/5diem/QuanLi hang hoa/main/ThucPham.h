#pragma once
#include"HangHoa.h"
using namespace std;
class ThucPham : public HangHoa {
private:
	char ngaysx[20];
	char ngayhh[20];
	char nhacc[10];
public:
	/*ThucPham() {
	}
	~ThucPham() {
	}
	ThucPham(char ma, char ten, int soluong, int dongia, double trigia, char ngaysx, char ngayhh, char nhacc) :HangHoa(ma, ten, soluong, dongia, trigia) {
		this->ngaysx[20] = ngaysx;
		this->ngayhh[20] = ngayhh;
		this->nhacc[10] = nhacc;
	}*/
	void nhap();
	void xuat();
	double getTri();

};
