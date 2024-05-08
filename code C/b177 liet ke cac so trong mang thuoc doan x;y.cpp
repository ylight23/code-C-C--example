#include<stdio.h>
#include<math.h>
#define N 10

void nhap(int arr[]){
	for(int i=0; i<N; i++){
		scanf("%ld", &arr[i]);
	}
}
void xuat(int arr[]){
	for(int i=0; i< N ;i++){
		printf("%5ld", arr[i]);
	}
}
void timdoan(int arr[], int x , int y){
	for(int i=0;i< N;i++){
		if(x <= arr[i] && arr[i] <= y){
			printf("%5ld", arr[i]);
		}
	}
}
int main(){
	int arr[N];
	nhap(arr);
	xuat(arr);
	int x,y;
	printf("\nNhap x:");
	scanf("%ld", &x);
	printf("Nhap y:");
	scanf("%ld", &y);
	printf("Cac gia tri trong mang thuoc doan [%ld ; %ld] la:", x,y);
	timdoan(arr,x,y);
}
