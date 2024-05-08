#pragma once
#include<iostream>
using namespace std;
class HangHoa {
protected:
	char ma[20];
	char ten[20];
	int soluong, dongia;
	double trigia;
public:
	//hanghoa() {
	//}
	//~hanghoa();
	//hanghoa(char ma, char ten, int soluong, int dongia, int trigia) {
	//	this->ma[20] = ma;
	//	this->ten[20] = ten;
	//	this->soluong = soluong;
	//	this->dongia = dongia;
	//	this->trigia = trigia;
	//}

	virtual void nhap();

	virtual void xuat();
		
	

	virtual double getTri() {
		return trigia;
	}
	bool check(char s[20]) {
		if (this->ma == s) {
			return true;
		}
		return false;
	}
	virtual char* getID() {
		return ma;
	}
};