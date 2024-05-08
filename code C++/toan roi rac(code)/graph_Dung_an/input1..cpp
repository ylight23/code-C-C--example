#include <stdio.h>
#include <conio.h>
//#include <iostream>
#include<bits/stdc++.h>

//#define TenFile "input1.txt"
//#define TenFile "input2.txt"
#define TenFile "input1.txt"
using namespace std;
void Doc_File(vector<vector<int> > &A,int &n){
	FILE *f = fopen(TenFile,"r");
	fscanf(f,"%d",&n);
	cout << n << endl;
	A.resize(n);
	cout <<"Ma Tran Lien Ket Cua Do Thi";
	for(int i =0;i<n;i++) {
		A[i].resize(n);
		cout << endl;
		for(int j =0;j<n;j++) {
			fscanf(f,"%d",&A[i][j]);
			cout<<"  "<<A[i][j];
		}
	}
	fclose(f);
}
int main() {
//	clrscr();
	int n;
	vector<vector<int> > A;
	Doc_File(A,n);
	//if (Lien_Thong(A,n)==1)
	//	cout<<"\nDO THI LIEN THONG";
//	else cout<<"\nDO THI KHONG LIEN THONG";
	return 0;
}
