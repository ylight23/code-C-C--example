#include<iostream>
#ifndef SACH_H
#define SACH_H

#include "AnPham.h"
using namespace std;
class Sach : public AnPham {
	public:
		Sach();
		~Sach();
		void nhap();
		void xuat();
		
	private:
		char tg[20];
		int page;
};

#endif
