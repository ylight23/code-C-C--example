#pragma once
#include "AnPham.h"
using namespace std;
class Bao : public AnPham
{
public:
	
	void nhap();
	void xuat();
	
private:
	int ngay;
};