#include<stdio.h>
#include<math.h>
# define N 100

void nhap(int arr[], int &n){
	do{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
		if(n<0 || n>N){
			printf("\nKhong hop le.Nhap lai: ");
		}
	}
	while (n<0 || n>N);
	for(int i=0;i<n; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}
void xuat(int arr[], int n){
	for(int i=0;i<n; i++){
		printf("%4d", arr[i]);
	}
}
int TinhTong(int arr[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
	     
		tong+=arr[i];
	}
	return tong;
}
int main(){
	int arr[N];
	int n;
	nhap(arr,n);
	xuat(arr,n);
	int tong = TinhTong(arr,n);
	printf("\nTong gia tri duong trong mang: %d", tong);
	return 0;
}
