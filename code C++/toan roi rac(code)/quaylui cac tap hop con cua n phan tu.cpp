#include<iostream>
using namespace std;
int a[100];
int n,i,j,k;
void xuat(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void quaylui(int j,int a[],int n){

	for(int j=a[i-1]+1;j<=n;j++){
		a[i]=j;
		if(i==n){
			xuat(a,n);
		}
		else
			quaylui(j+1,a,n);
	}
}
int main(){
	cin>>n;
	quaylui(1,a,n);
}
