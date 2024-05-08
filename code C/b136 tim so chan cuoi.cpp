#include<stdio.h>
#include<math.h>
#define N 10

void nhap(int arr[]){
	for(int i=0; i<N;i++){
		scanf("%ld", &arr[i]);
	}
}
void xuat(int arr[]){
	for(int i=0;i<N;i++){
		printf("%5ld", arr[i]);
	}
}
int timchancuoi(int arr[]){
	for(int i=N-1;i>=0;i--){ //cho vong lap i giam dan neu thoa man dieu kien so chan cuoi cung trong mang chia het cho 2 =>in ra
		if(arr[i]%2==0){	//neu ko thoa man cho return ve -1 ket thuc vong lap
			return arr[i];
		}
	}
	return -1;
}
int main(){
	int arr[N];
	nhap(arr);
	xuat(arr);
	int chan_cuoi =timchancuoi(arr);
	printf("\nSo chan cuoi cung la %ld",chan_cuoi);
}
