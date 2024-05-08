#pragma once
#include"SoTietKiem.h"
#include<iostream>
#include<string>
using namespace std;
class CoHan : public SoTietKiem {
	private:
		int ki_han;
	public:
		void nhap();
		void xuat();
		double tienlai();
};