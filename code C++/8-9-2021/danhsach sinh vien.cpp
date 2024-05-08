#include<iostream>
#include<string.h>
using namespace std;

class SinhVien{
	private:
		string id,name;
		double diemTB;
	public:
		SinhVien();
		SinhVien(string i, string name, double x);
		void nhapSV();
		void xuatSV();
		double getTB();
		
	
};
SinhVien::SinhVien(){
	
}
SinhVien::SinhVien(string i, string name1, double x){
	this->id=i;
	this->name=name1;
	this->diemTB=x;
}
void SinhVien::nhapSV(){
	cout<<"Nhap ten sinh vien: ";
	fflush(stdin);
	getline(cin,name);
	cout<<"Nhap id: ";
	cin>>id;
	cout<<"Nhap diem trung binh: ";
	cin>>diemTB;
}
double SinhVien::getTB(){
	return diemTB;
}
void SinhVien::xuatSV(){
	cout<<name<<"\t"<<id<<"\t"<<diemTB<<endl;
}
int main(){
	SinhVien a[100];
	int n;
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhapSV();
	
	}
	cout<<"\nHoten \tMaID \tDiemTB \n";
	for(int i=0;i<n;i++){
		a[i].xuatSV();
	}
	float max=a[0].getTB();
	for(int i=0;i<n;i++){
		if(max>a[0].getTB()){
			max=a[0].getTB();
		}
	}
	cout<<"Diem trung binh out trinh:"<<max;
	
}
