#include <bits/stdc++.h>
#include<math.h>
using namespace std;

class DaGiac{
	protected:
		float dientich;
	public:
		~DaGiac();
		virtual void nhapDT();
		virtual void setDT()=0;
		float getDT();
		virtual void printDT();
};
DaGiac::~DaGiac(){
	
}
float DaGiac::getDT(){
	return dientich;
}
void DaGiac::printDT(){
	cout<<dientich<<endl;
}
class ChuNhat: public DaGiac{
	private:
		int chieudai;
		int chieurong;
	public:
		ChuNhat();
		ChuNhat(int x,int y);
		void nhapDT();
		virtual void setDT();
		float getDT(){
			DaGiac::getDT();
		}
		void printDT();	
};
ChuNhat::ChuNhat(int x, int y){
	this->chieudai=x;
	this->chieurong=y;
	setDT();
}
void ChuNhat::nhapDT(){
	cout<<"Nhap chieu dai:";
	cin>>chieudai;
	cout<<"Nhap chieu rong:";
	cin>>chieurong;
	setDT();
}
void ChuNhat::setDT(){
	dientich=this->chieudai *this->chieurong;
}
void ChuNhat::printDT(){
	cout<<"Dien tich hinh chu nhat: ";
	DaGiac::printDT();
}

class TamGiac: public DaGiac{
	private:
		float a,b,c;
	public:
		TamGiac();
		TamGiac(float A,float B, float C);
		void nhapDT();
		virtual void setDT();
		void printDT();
		float getDT(){
			DaGiac::getDT();
		}		
};

TamGiac::TamGiac(float A, float B, float C){
	this->a=A;
	this->b=B;
	this->c=C;
	setDT();
}
void TamGiac::nhapDT(){
	cout<<"Nhap canh a: ";
	cin>>a;
	cout<<"Nhap canh b: ";
	cin>>b;
	cout<<"Nhap canh c: ";
	cin>>c;
	setDT();
}
void TamGiac::setDT(){
	float p=(a+b+c)/2;
	float area=sqrt(p*(p-a)*(p-b)*(p-c));
	dientich=area;
	
}
void TamGiac::printDT(){
	cout<<"Dien tich hinh tam giac: ";
	DaGiac::printDT();
}

class Tron: public DaGiac{
	private:
		float bankinh;
	public:
		Tron();
		Tron(float r);
		void nhapDT();
		void setDT();
		void getDT(){
			DaGiac::getDT();
		}
		void printDT();	
};
Tron::Tron(){
	bankinh=0;
	setDT();
}
Tron::Tron(float r){
	this->bankinh=r;
	setDT();
}
void Tron:: nhapDT(){
	cout<<"Nhap ban kinh hinh: ";
	cin>>bankinh;
	setDT();
}
void Tron::setDT(){
	dientich=this->bankinh*this->bankinh*3.14;
}
void Tron::printDT(){
	cout<<"Dien tich ban kinh: ";
	DaGiac::printDT();
}
int main(){
	// khai bao bien
	
	ChuNhat a[100];
	TamGiac b[100];
	Tron c[100];
	int n1,n2,n3;
	cout<<"Nhap so luong hinh chu nhat: ";
	cin>>n1;
	for(int i=0;i<n1;i++){
		a[i].nhapDT();
		a[i].setDT();
		a[i].printDT();
	}
	cout<<"Nhap so luong hinh tam giac: ";
	cin>>n2;
	for(int i=0;i<n2;i++){
		b[i].nhapDT();
		b[i].setDT();
		b[i].printDT();
	}
	cout<<"Nhap so luong hinh tron: ";
	cin>>n3;
	// nhap thong tin da giac
	for(int i=0;i<n3;i++){
		c[i].nhapDT();
		c[i].setDT();
		c[i].printDT();
	}
	// nhap vao 1 mang 
	// tim max cua moi mang
	//cho 3 max so sanh voi nhau
}
