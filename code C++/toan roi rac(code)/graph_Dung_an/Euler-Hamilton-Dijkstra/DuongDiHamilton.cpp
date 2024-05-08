#include <conio.h>
#include <io.h>
#include <iostream>

using namespace std;

#define MAX 50
#define TRUE 1
#define FALSE 0

int A[MAX][MAX], C[MAX], B[MAX];
int n, i, d;

void Init(void){
	int i, j;
	FILE *fp;
	fp = fopen("input_2.txt", "r");
	if (fp == NULL){
		cout << "Khong co file input" << endl;
	getch();
		return;
	}
	
	fscanf(fp, "%d", &n);
	cout <<"so dinh do thi: " << n << endl;
	cout << "Ma tran ke: " << endl ;
	for (i=1; i<=n ; i++){
		//cout<<"\n";
		for(j=1; j<=n; j++){
			fscanf(fp, "%d   ", &A[i][j]);
			printf("%-5d", A[i][j]);
		}
		cout << endl;
	}
	fclose(fp);
	for (i=1; i<=n;i++)
		C[i] =0;
}

void Result(){
	int i;
	cout << endl << endl;
	for (i=n; i>0;i--)
		cout <<"  " << B[i];
	d++;
}

void Hamilton(int *B, int *C, int i){
	int j, k;
	for(j=1;j<=n;j++){
		if(A[B[i-1]][j] ==1 && C[j]==0){
			B[i]=j;
			C[j]=1;
			if(i<n)
				Hamilton(B, C, i+1);
			else Result();
//			Result();
			C[j]=0;
		}
	}
}

int main(){
	B[0] = 1;
	i=1;
	d=0;
	Init();
	Hamilton(B, C, i);
	if(d == 0)
		cout << endl << "Khong co duong di Hamilton";
	return 0;
}