#pragma once
#include"KhongHan.h"
#include"CoHan.h"
#include<iostream>
using namespace std;
#include<vector>
class QuanLi {
private:
	vector<SoTietKiem*> sotietkiem;
public:
	void Them();
	void Xuat();
	void TinhLai();
};
