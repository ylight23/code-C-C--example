#pragma once
#include<iostream>
#include<string>
using namespace std;
class SoTietKiem {
	protected:
		string CMND;
		string ten;
		unsigned int tien;//tien gui
		char ngay[20];//ngay lap so
		double lai ;//laisuat
		int n;//thang gui
		bool loaitk;
	public:
		virtual void nhap();
		virtual void xuat();
		virtual double tienlai();
		bool getter() {
			return loaitk;
		}
		void setter(int ltk) {
			loaitk = ltk;
			
		}
};