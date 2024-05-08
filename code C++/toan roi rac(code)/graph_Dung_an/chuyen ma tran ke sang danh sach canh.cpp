#include<iostream>
using namespace std;
int a[100][100];
int main(){
	int n;
	cin>>n;
	int m=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i][j]==1){
				m++;
				cout<<i+1<<" "<<j+1;
			}
			cout<<endl;
		}
		//cout<<endl;
	}
}
