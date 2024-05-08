#pragma once
#include"AnPham.h"
using namespace std;
class Sach : public AnPham {
public:
	
	void nhap();
	void xuat();
	
private:
	char tg[20];
	int page;
};