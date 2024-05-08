#include<iostream>
using namespace std;
int a[100];
int b[100];
int n;
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int k){
	for(int i=1;i<=n;i++){
		if(!b[i]){
			a[k]=i;
			b[i]=1;//da danh dau
			if(k==n){
			
				xuat();
			}
			else
				Try(k+1);
			b[i]=0;	// lam moi danh dau
		}
		
	}
	
}
int main(){
	//int n;
	cin>>n;
	//int a[n];
	Try(1);
}
