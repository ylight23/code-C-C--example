#include<iostream>
//bai toan liet ke cac phan tu la tap con cua tap n phan tu bat ki VD; ton tai 123 se co 132 hoac 213,231,312,321
using namespace std;
int n, k,  a[100],  b[100];
void xuat(int a[] ,int k){
	for(int i=1;i<=k;i++){//k <=n
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int i, int b[] ,int n){
	for(int j=1; j<=n;j++){ //chay tu 1->n
		if(!b[j]){//kiem tra phan tu nao danh dau hay chua
		
			a[i]=j;//luu ptu vao hoan vi
			b[j]=1;//danh dau xuat hien
			if(i==k){//du k phan tu<=n
				xuat(a,k);//xuat mang hoan vi k
			}
			else 
				Try(i+1,b,n);//tiep tuc ktra i+1
			b[j]=0;// tra kiem tra ve chua danh dau
		}
	}
}
int main(){
	cin>>n>>k;	
	Try(1, b,n);
}
