#include<iostream>
using namespace std;

class SoPhuc{
	protected:
		double pt,pa; //phan thuc va phan ao
	public:
		void nhap();
		void in();	
};
void SoPhuc::nhap(){
	cout<<"phan thuc: ";
	cin>>pt;
	cout<<"phan ao: ";
	cin>>pa;
}
void SoPhuc::in(){
	cout<<pt<<" + i."<<pa<<endl;
}
class SoPhuc1: public SoPhuc{
	public:
		SoPhuc1 operator+(SoPhuc1 sp2);
		SoPhuc1 operator-(SoPhuc1 sp2);
		SoPhuc1 operator*(SoPhuc1 sp2);
		
};	
SoPhuc1 SoPhuc1::operator+(SoPhuc1 sp2){
	SoPhuc1 sp;
	sp.pt = this->pt + sp2.pt;
	sp.pa = this->pa + sp2.pa;
	return sp;
}
SoPhuc1 SoPhuc1::operator-(SoPhuc1 sp2){
	SoPhuc1 sp;
	sp.pt = this->pt + sp2.pt;
	sp.pa = this->pa + sp2.pa;
	return sp;
}
SoPhuc1 SoPhuc1::operator*(SoPhuc1 sp2){
	SoPhuc1 sp;
	sp.pt = this->pt * sp2.pt - this->pa * sp2.pa;
	sp.pa = this->pa * sp2.pt + this->pt * sp2.pa;
	return sp;
}
int main(){
	SoPhuc sp;
	//sp.nhap();
	//sp.in();
	SoPhuc1 sp1,sp2,kq;
	sp1.nhap();
	sp2.nhap();
	cout<<"Tong: ";
	kq = sp1.operator+(sp2); //viet theo cach khac ngan gon hon kq = sp1 + sp2;
	kq.in();
	cout<<"\nTich: ";
	kq= sp1.operator*(sp2);
	kq.in();
}
