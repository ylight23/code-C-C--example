#include<iostream>
using namespace std;
int n,k, a[100];
void xuat(int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void quay_lui(int i, int k, int sum){
	for(int j=0;j<=1;j++){
		if(sum+j<=k){
			a[i]=j;
			sum+=j;
			if(sum+j==k){
				xuat(a,n);
			}
			else
				quay_lui(i+1,j,sum);
			sum-=j;	
		}
	}
}
int main(){
	cin>>n>>k;
	quay_lui(1,n,0);
}
