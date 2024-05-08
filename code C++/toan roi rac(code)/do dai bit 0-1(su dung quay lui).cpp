#include<iostream>
using namespace std;

void xuat(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void quay_lui(int i,int b[] ,int n){
	for(int j=0;j<=1;j++){ //j chay gia tri 0 va 1
		b[i]=j; //gan phan tu b[i] dau tien tai gia tri 0 va 1 va bat dau vong lap i=0 -> i=n-1
		if(i==n-1){ //neu liet ke het cac phan tu cua mang 
			xuat(b,n); //xuat mang
		}
		else{
			quay_lui(i+1,b,n); //neu chua tang i+1 len va tiep tuc gan va chay vong lap
		}
	}
}
int main(){
	
	int n;
	cin>>n;
	int b[n];
	quay_lui(0,b,n); // bat dau gan b[i]==0
}
