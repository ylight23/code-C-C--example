#pragma once
#include"Giaodich.h"
#include"Vang.h"
#include"Tiente.h"
#include<vector>
#include<string>
using namespace std;

class QuanLi {
	private:
		vector<GiaoDich*> giaodich;
		vector<TienTe*> tiente;
	public:
		void Them();
		void Xuat();
		void Sua();
		int Xoa();
		void Tim();
		double TrungBinh();
};