#include<iostream>
using namespace std;
//y tuong luu 1 phan tu vao to hop,sau do danh dau su dung,lap lai khi dc 1 to hop hoan chinh in ra
int n;
int a[100];//mang xuat ra cac phan tu da hoan vi thanh 1 to hop hoan chinh
int b[100];//ham danh dau chua co phan tu nao su dunghet

void xuat(int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";//xuat mang hoan vi
		
	}
	cout<<endl;
}
void Try(int i,int b[], int n){
	for(int j=1;j<=n;j++){ //chay tu 1 den n phan tu can nhap 
		if(!b[j]){ //kiemtra ptu chua dc chon thi danh dau=>neu chua dc danh dau...
			a[i]=j; //luu phan tu vao hoan vi
			b[j]=1;// danh dau da dung
			if(i==n){//danh dau du n phan tu thi xuat
				xuat(a,n);
			}
			else
				Try(i+1,b,n);//tiep tuc  tang i+1 ptu
			b[j]=0;	//gan kiem tra gia tri moi phai la true
		}
	}
}
int main(){
	cin>>n;
	Try(1,b,n);
}
