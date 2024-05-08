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
	printf("\nMang nhap: ");
	for(int i=0;i<n;i++){
		printf("%4d", a[i]);
	}
	printf("\n");
}
int CheckZero(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]==0 && a[i+1]==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a[N];
	int n;
	nhap(a,n);
	xuat(a,n);
	int Check=CheckZero(a,n);
	if(Check==0){
		printf("\n 2 phan tu 0 lien tiep");
	}
	else 
		printf("\n 2 phan tu 0 khong lien tiep");
	return 0;
}
