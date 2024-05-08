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
void swap(int &x, int &y){
	int tg = x;
	x=y;
	y= tg;
}
void selectionSort(int arr[]){
	
	for(int i=0;i<N-1;i++){
		int min =i;
		for(int j=i+1;j<N; j++){
		
			if(arr[j]< arr[min]){
			
				min =j;
				swap(arr[min], arr[i]);
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
