#pragma once
#include<iostream>
using namespace std;
class AnPham
{
public:
	
	virtual void nhap();
	virtual void xuat();
	virtual char* getID() {
		return ma;
	}
	bool checkID(char s[20]) {
		if (this->ma == s) {
			return true;
		}
		else
			return false;
	}
protected:
	char ma[20];
	char nxb[20];
	char pub[20];
};
