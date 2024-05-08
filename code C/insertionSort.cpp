#include<stdio.h>
#include<math.h>
#define N 10
void nhap(int arr[]){
	for(int i=0;i<N;i++){
		scanf("%ld", &arr[i]);
	}
}

void xuat(int arr[]){

	for(int i=0;i<N;i++){
		printf("%5ld", arr[i]);
	}
	
}
void insertionSort(int arr[]){

	for(int i=0;i <N;i++){
		int j=i-1;
		int t=arr[i];
		while(t<arr[j] && j>0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=t;	
	}
}
int main(){
	int arr[N];
	nhap(arr);
	printf("\nTruoc khi sap xep:");
	xuat(arr);
	printf("\nSau khi sap xep:");
	insertionSort(arr);
	xuat(arr);
}
