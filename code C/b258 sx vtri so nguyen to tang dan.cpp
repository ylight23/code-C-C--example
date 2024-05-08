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
void vitri(int a[], int n){
	printf("Vi tri : \n");
	for(int i=0;i<n;i++){
		printf("%4d", i);
	}
}
int CheckNgTo(int n){
	if(n<2){
		return 0;
	}
	else if(n>2){
		if(n%2==0){
			return 0;
		}
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void Sort(int &a, int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
void SortElement(int a[], int n){
	for(int i=0;i<n-1;i++){
		if (CheckNgTo(a[i])==1){ //kiem tra tung phan tu i la so nguyen to
		
			for(int j=i+1;j<n;j++){
				if(CheckNgTo(a[j])==1 && a[i]>a[j]){ //kiem tra phan tu i+1 nguyen to
					Sort(a[i], a[j]); // sap xep tang dan
				}
			}
		}	
	}
}
int main(){
	int a[N];
	int n;
	nhap(a,n);
	vitri(a,n);
	xuat(a,n);
	printf("\nSau khi sap xep:\n");
	SortElement(a,n);
	xuat(a,n);
	return 0;
}

