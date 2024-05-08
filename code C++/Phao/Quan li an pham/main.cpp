#include <iostream>
#include"AnPham.h"
#include"Sach.h"
#include"TapChi.h"
#include"Bao.h"
#include"QuanLiAnPham.h"
#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(QuanLiAnPham ql){
	int ch;
	
	do{
		system("cls");
		cout<<"1.Them"<<endl;
		cout<<"2.Xuat"<<endl;
		cout<<"3.Tim"<<endl;
		cout<<"4.Thoat"<<endl;
		cout<<"Hay chon! : ";
		cin>>ch;
		switch(ch){
			case 1:{
				ql.Them();
				
				break;
			}
			case 2:{
				ql.Xuat();
				system("pause");
				break;
			}
			case 3:{
				ql.Tim();
				//system("pause");
				break;
			}
			case 4:
				break;
		}
	}
	while(ch!=4);
}
int main() {
	QuanLiAnPham a;
	menu(a);
//	int n;
//	char s[20];
//	AnPham a[n];
//	for(int i=0;i<n;i++){
//		a[n].nhap();
//	}
//	
//	cout<<"Nhap ma";
//	cin>>s;
////	if(a.checkID(a.getID())){
////		cout<<a.getID();
////	}
////	else 
////	cout<<"no";
	
	return 0;
}
