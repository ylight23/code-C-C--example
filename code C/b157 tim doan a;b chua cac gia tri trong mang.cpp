#include<stdio.h>
#include<math.h>
#define N 10

void nhap(int arr[]){
	for(int i=0; i<N; i++){
		scanf("%ld", &arr[i]);
	}
}
void xuat(int arr[]){
	for(int i=0;i<N;i++){
		printf("%6ld", arr[i]);
	}
}
void timdoan(int arr[]){
	int max= arr[0];
	int min= arr[0];
	for(int i=0; i<N;i++){
		if(max < arr[i]){
			max= arr[i];
		}
		else max =max;
		if(min > arr[i]){
			min = arr[i];
		}
		else min =min;
	}
	printf("\nDoan chua cac gia tri trong mang la [%ld ; %ld]", min , max);
}
int main(){
	int arr[N];
	nhap(arr);
	xuat(arr);
	timdoan(arr);
}

