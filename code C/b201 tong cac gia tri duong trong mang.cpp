#include<stdio.h>
#include<math.h>
# define N 100

void nhap(float arr[], int &n){
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
		scanf("%f", &arr[i]);
	}
}
void xuat(float arr[], int n){
	for(int i=0;i<n; i++){
		printf("%8.3f", arr[i]);
	}
}
int TinhTongDuong(float arr[], int n){
	float tong=0;
	for(int i=0; i<n; i++){
		if(arr[i]>=0){
		
			tong+=arr[i];
		}
	}
	return tong;
}
int main(){
	float arr[N];
	int n;
	nhap(arr,n);
	xuat(arr,n);
	float tong = TinhTongDuong(arr,n);
	printf("\nTong gia tri duong trong mang: %f", tong);
	return 0;
}
