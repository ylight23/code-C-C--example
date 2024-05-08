#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int n;
	int a[100][100];
	//doc file
	FILE *f;
	f = fopen("input1.txt", "r");//r= read : mo file chi doc
	//nhap so luong n
	fscanf(f, "%d", &n);
	//nhap ma tran ke n x n 
	printf("%d\n", n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			fscanf(f, "%d" , &a[i][j]);
		}
	}
	//in ma tran ra man hinh
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		cout<<endl;
	}
	cout<<endl;
	
	//chuyen ma tran sang danh sach ke in ra input1_1
	FILE *fptr1;
	fptr1 = fopen("input1_1.txt", "w");//w= mo file chi duoc ghi
	fprintf(fptr1 , "%d\n", &n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1){ //phan tu nao =1 in ra vi tri cot j+1
				fprintf(fptr1,"%d ", j+1);
			}
		}
		fprintf(fptr1, "\n");
	}
	fclose(fptr1);
	//chuyen ma tran sang danh sach canh in ra input1_2
	FILE *fptr2;
	fptr2 = fopen("input1_2.txt", "w");//mo file va chi ghi
	fprintf(fptr2, " \n");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i][j]==1){
				fprintf(fptr2, "%d %d\n",i+1, j+1); //in ra man hinh thi bo fptr2 va sua thanh printf binh thuong
			}
		}
	//	printf( "\n");
	}
	fclose(fptr2);
}
