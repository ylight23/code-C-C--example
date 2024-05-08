#ifndef TAPCHI_H
#define TAPCHI_H

#include "AnPham.h"

class TapChi : public AnPham
{
	public:
		TapChi();
		~TapChi();
		void nhap();
		void xuat();
		
	private:
		int so;
		int thang;
};

#endif
