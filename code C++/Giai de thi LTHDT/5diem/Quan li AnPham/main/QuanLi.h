#pragma once
#include"AnPham.h"
#include"Sach.h"
#include"TapChi.h"
#include"Bao.h"
#include<vector>
class QuanLi
{
public:
	void Them();
	void Xuat();
	void Tim();
private:
	vector<AnPham*> anpham;
};