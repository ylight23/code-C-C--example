#include<stdio.h>
#include<math.h>
#define N 100
// vi tri   	0  1  2  3  4  5  6  7  8  9 
//mang nhap 	2  4  6  3  7  4  19 11 2  15 

//sap xep vt le 2  3  6  4  7  4  19 11 3  15

//vi tri chan giu nguyen ,sx vtri le 1 ,3 ,5 ,7 ,9
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
	printf("\nVi tri: \n");
	for(int i=0;i<n;i++){
		printf("%4d",i);
	}
}
void Sort(int &a, int &b){
	
	int tmp=a;
	a=b;
	b=tmp;

}
void SortOddPositon(int a[] , int n){
	for(int i=0;i<n;i++){
		//sap xep vitri le
		if(i %2 !=0){
			for(int j=i+1;j<n;j++){ 
				if(j %2 !=0 && a[i] > a[j]){ // sap xep vi tri le tang dan
					Sort(a[i] , a[j]);
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
	printf("\nMang sau khi sap xep: ");
	SortOddPositon(a,n);
	xuat(a,n);
	return 0;
}
