#pragma once
#include<iostream>
using namespace std;
class GiaoDich {
	protected:
		char ma[20];
		char ngay[20];
		int don, soluong;
		int trigia;
		bool KT;
	public:
		
		virtual void nhap();
		virtual void xuat();
		virtual double getTri();
		virtual char *getID();
		bool getter() {
			return KT;
		}
		void setter(bool kt) {
			KT = kt;
		}
		bool checkID(char s[20]) {
			if (this->ma == s) {
				return true;
			}
			return false; 
		}
};

