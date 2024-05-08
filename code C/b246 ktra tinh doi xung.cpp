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
int CheckSymmetry(int a[], int n){//kiem tra tinh doi xung
	for(int i=0;i<n;i++){
		if(a[i] != a[n-i-1]){ //1 phan tu chay tu dau mang va 1 phan tu chay tu cuoi mang
			return 0;	// neu 2 phan tu bang nhau tra ve true ,neu k bang nhau tra ve false
		}
	}
	return 1;
}
int main(){
	int a[N];
	int n;
	nhap(a,n);
	xuat(a,n);
	int Check=CheckSymmetry(a,n);
	if(Check==1){
		printf("\nDoi xung");
	}
	else
		printf("\nKhong doi xung");
	return 0;	
}
