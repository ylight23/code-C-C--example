#include<iostream>
#include <algorithm>    // std::swap
using namespace std;

class PhanSo{
	private:
		double tu,mau,phanso;
	public:
		PhanSo();
		PhanSo(double X, double Y,double Z);
		void nhapPS();	
		void xuatPS();
		
		double getPS();
		void setPS(double tu,double mau);
		static int compare(PhanSo PhanSo[], double );
		void swap(PhanSo & ps1 , PhanSo &ps2); //doi vi tri
		void BubbleSort(PhanSo arr[], int n);//sap xep tang dan
};
PhanSo::PhanSo(){
	
}
PhanSo::PhanSo(double X, double Y, double Z){
	this->tu=X;
	this->mau=Y;
	this->phanso=Z;
	setPS(tu ,mau);
}
double PhanSo::getPS(){
	return phanso;
}

void PhanSo::nhapPS(){
	
	
	cout<<"\nNhap tu so: ";
	cin>>tu;
	do{
	cout<<"Nhap mau so: ";
	cin>>mau;
		if(mau==0){
			cout<<"Xem lai dieu kien!\n";
		}
		
	}	
	while(mau==0);	
	setPS(tu,mau);
}
void PhanSo::setPS(double tu, double mau){
	this->tu=tu;
	this->mau=mau;
	phanso=this->tu/this->mau;
}

void PhanSo::xuatPS(){
	cout <<this->tu<<"/"<<this->mau<<"   ";
}
bool operator<(PhanSo &nv1,PhanSo &nv2){
	
	if(nv1.getPS()<nv2.getPS()){
		return true;
	}
	return false;	  
}
bool operator>(PhanSo &nv1,PhanSo &nv2){
	
	if(nv1.getPS()>nv2.getPS()){
		return true;
	}
	return false;	  
}
bool operator<=(PhanSo &nv1, PhanSo &nv2){
	
	if(nv1.getPS()<=nv2.getPS()){
		return true;
	}
	return false;	  
}
bool operator>=(PhanSo &nv1, PhanSo &nv2){
	
	if(nv1.getPS()>=nv2.getPS()){
		return true;
	}
	return false;	  
}
bool operator==(PhanSo &nv1, PhanSo &nv2){
	if(nv1.getPS()==nv2.getPS()){
		return true;
	}
	return false;
	  
}
void PhanSo::swap(PhanSo &ps1, PhanSo &ps2){
	
	PhanSo tmp=ps1;
	ps1=ps2;
	ps2=tmp;
}	
void PhanSo::BubbleSort(PhanSo arr[], int n){
    for (int i = 0; i < n ; i++)
        for (int j = i+1 ; j < n ; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}
int main(){
	PhanSo a[100];
	int n;
	cout<<"Nhap so luong phan so: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		a[i].nhapPS();
		a[i].xuatPS();
		a[i].getPS();
	}
	cout<<"\nDay cac phan so: ";
	for(int i=0;i<n;i++){
		a[i].xuatPS();
	}
	//tim max trong cac phan so
	double max=a[0].getPS();
	int index;
	for(int i=0;i<n;i++){
		
		if(max<a[i].getPS()){
			max=a[i].getPS();
			index=i;
		}
	}
	cout<<"\nPhan so max: ";
	a[index].xuatPS();
		
	
	
	//danh sach sap xep tang dan
	
	cout<<"\nDanh sach sap xep tang dan: ";
	for(int i=0;i<n;i++){
		for(int j=i+1; j<n;j++){
		
			if(a[i].getPS()>a[j].getPS()){
				a[n].BubbleSort(a,n);

			}
		}
		a[i].xuatPS();
	}
	
}
