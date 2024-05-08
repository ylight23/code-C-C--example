#include<iostream>
using namespace std;
#define N 100
void nhap(int a[], int b[],int &n){
	do{
		cout<<"Nhap so phan tu: ";
		cin>>n;
		if(n<0 || n>N){
			cout<<"Khong hop le.Nhap lai";;
		}
	}
	while(n<0 || n>N);
	for(int i=0;i<n;i++){
		cout<<"Nhap doan thang "<<i<<"["<<i<<";"<<i<<"]: ";
		cin>>a[i]>>b[i];
	}
}
void xuat( int a[],int b[], int n) {// ham  xuat
	for(int i=0; i< n; i++) {
			
		cout<<"Doan thang "<<i<<": ["<<a[i]<<";"<<b[i]<<"]"<<endl;
	}
}
void kiemtrathuocdoanthang(int a[],int b[], int x){
	for(int i=0;i<n;i++){
		
	}
}
int main(){
	int n;
	int a[N],b[N];
	nhap(a,b,n);
	xuat(a,b,n);
}
