#ifndef QUANLIANPHAM_H
#define QUANLIANPHAM_H
#include"AnPham.h"
#include"Sach.h"
#include"TapChi.h"
#include"Bao.h"
#include<vector>
class QuanLiAnPham
{
	public:
		void Them();
		void Xuat();
		int Tim();
	private:
		vector<AnPham*> anpham;
};

#endif
