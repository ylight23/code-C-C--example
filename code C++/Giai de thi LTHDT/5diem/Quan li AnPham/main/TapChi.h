#pragma once
#include "AnPham.h"
using namespace std;
class TapChi : public AnPham
{
public:
	
	void nhap();
	void xuat();
	
private:
	int so;
	int thang;
};