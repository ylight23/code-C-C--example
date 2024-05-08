#pragma once
#include"HangHoa.h"
#include"MayMac.h"
#include"ThucPham.h"
#include"DienMay.h"
#include<vector>
using namespace std;
class QuanLi {
private:
	vector<HangHoa*> hanghoa;
public:
	void XuatSP();
	void SuaSP();
	int XoaSP();
	void ThemSP();
	void TonKhoMax();
};