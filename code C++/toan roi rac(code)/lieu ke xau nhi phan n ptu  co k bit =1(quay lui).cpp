#include<iostream>
using namespace std;
int n,k,dem,a[100], b[100];
void xuat(int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void quay_lui(int i, int a[]){
	for(int j=0;j<=1;j++){ //j chay gia tri tu 0->1
		a[i]=j;//gan gia tri a[i]
		dem+=j;//sd bien dem moi lan gan
		if(i==n && dem==k){ //du n phan tu i va dem=k phan tu 1 thi xuat( muon tim x phan tu 0 thi dem=n-k phan tu 0)
				
			xuat(a,n);
		}
		else if(i<n)//neu chua du i tiep tuc quay lui ve cac buoc truoc
			quay_lui(i+1,a);
				
		dem-=j;//tra bien dem ve 0
	}
}

int main(){
	dem=0;
	cin>>n>>k;///nhap k phan tu 1
	quay_lui(1,a);
}
