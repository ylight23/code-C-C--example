#ifndef BAO_H
#define BAO_H

#include "AnPham.h"

class Bao : public AnPham
{
	public:
		Bao();
		~Bao();
		void nhap();
		void xuat();
		
	private:
		int ngay;
};

#endif
