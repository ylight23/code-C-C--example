#pragma once
#include<iostream>
using namespace std;
#include "Giaodich.h"

class TienTe: public GiaoDich
{
public:
	
	void nhap();
	void xuat();
	double getTri();
private:
	int tigia;
	char loaitien[20];
};


