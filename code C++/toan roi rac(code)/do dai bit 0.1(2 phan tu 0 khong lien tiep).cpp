#include<iostream>
using namespace std;

void xuat(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
bool check(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]==0 && a[i-1]==0){
			return false;
		}	
	}
	return true;
}
void quay_lui(int i, int a[], int n){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-1){
			if(check(a,n)){
				xuat(a,n);
			}
		}
		else
			quay_lui(i+1,a,n);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	quay_lui(0,a,n);
}
