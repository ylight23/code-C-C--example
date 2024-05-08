#include<iostream>
using namespace std;
int a[100][100],n;
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1) //neu phan tu ma tran =1 => in ra vi tri cot j cua phan tu do
				cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
