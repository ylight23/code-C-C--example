#include<iostream>
//chua xong dit cu no luoi lam qua :V
using namespace std;
int a[100];
int ok;
int n,i,j,k,r,s;
void khoitao(){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	
}
int Hoan_Vi(){
	int j=n-2;
	while(a[j]>a[j+1] && j>=0){
		--j;
		if(j<0){
			ok=0;
			return 1;
		}
		else{
			int k=n-1;
			while(a[j]>a[k]){
				--k;
				int tmp=a[j];
				a[j]=a[k];
				a[k]=tmp;	
				int r=j+1;
				int s=n-1;
				while(r<s){
					int tmp=a[r];
					a[r]=a[s];
					a[s]=tmp;
				}
			}
		}
	}
	return 0;
}
int main(){
	int ok=1;
	cout<<"Nhap n:";
	cin>>n;
	khoitao();
	while(ok==1){
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
		Hoan_Vi();
	}
	return 0;
}
