#pragma once
#include<iostream>
using namespace std;
#include"Giaodich.h"
class Vang:public GiaoDich
{
public:
	
	void nhap();
	void xuat();
	double getTri();
private:
	char loaivang[20];
	
};

