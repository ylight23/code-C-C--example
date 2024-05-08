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

void selectionSort(int arr[]) {
	for(int i=0;i<N; i++){
		for(int j=i;j<N;j++){ //arr[i] co gt nho nhat tu arr[i] -> arr[n-1]
			if(arr[j]<arr[i]){ // neu co arr[j] < arr[i] -> swap them
				int tmp =arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}
int main(){
	int arr[N];
	nhap(arr);
	printf("\nTruoc khi sap xep:");
	xuat(arr);
	printf("\nSau khi sap xep:");
	selectionSort(arr);
	xuat(arr);
}
