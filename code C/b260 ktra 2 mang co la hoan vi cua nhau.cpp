#include<stdio.h>
#include<math.h>
#define N 100
void nhap(int a[], int &n){
	do{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
		if(n<0 || n>N){
			printf("\nSo phan tu khong hop le.Nhap lai");
		}
	}
	while(n<0 || n>N);
	for(int i=0;i<n;i++){
		printf("\nNhap a[%d]: ",i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	printf("\nMang nhap: \n");
	for(int i=0;i<n;i++){
		printf("%4d", a[i]);
	}
	printf("\n");
}
void Sort(int &a, int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
void SortArr(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				Sort(a[i], a[j]);
			}
		}
	}
}
void CheckHoanVi(int a[], int b[], int na, int nb){
	if(na != nb){
		printf("\nNo");
		return ;
	}
	SortArr(a,na);
	SortArr(b,nb);
	for(int i=0;i<na;i++){
		if(a[i] != b[i]){
			printf("\nNo");
			return;
		}
		
	}
	
	printf("\nYes");
	return;
}
int main(){
	int a[N],b[N],na,nb;
	nhap(a,na);
	xuat(a,na);
	nhap(b,nb);
	xuat(b,nb);
	CheckHoanVi(a,b,na,nb);
}

