#pragma once
#include"SoTietKiem.h"
#include<iostream>
#include<string>
using namespace std;
class KhongHan : public SoTietKiem {
	public:
		void nhap();
		void xuat();
		double tienlai();
};