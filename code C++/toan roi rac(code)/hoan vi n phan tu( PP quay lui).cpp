#include<iostream>
#include<stdbool.h>
using namespace std;
int n, a[101], b[100];
void xuat(int a[], int n){
	for(int j=1;j<=n;j++){
		cout<<a[j]<<" ";
	}
	cout<<endl;
}
void quay_lui(int i){
	if(i>n){
		xuat(a,n);
	}
	for(int j=1;j<=n;j++){
		if(b[j]==0){
			b[j]=1;
			a[i]=j;
			quay_lui(i+1);
			b[j]=0;	
		}
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<= n;i++){
		b[i]=0;		
		quay_lui(1);
	}
	
	return 0;
}
