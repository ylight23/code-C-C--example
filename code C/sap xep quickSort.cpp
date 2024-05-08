#include<stdio.h>
#include<math.h>
#define N 10
void nhap(int arr[]){
	for(int i=0;i<N;i++)	{
		scanf("%ld", &arr[i]);
	}
}

void xuat(int arr[]){

	for(int i=0;i<N;i++)	{
		printf("%5ld", arr[i]);
	}
	
}
void quickSort(int arr[], int l, int r){ //Sap xep day khong giam

 	int p = arr[(l + r) / 2]; //dchon diem chot o giua arr
 	int i = l, j = r;
 	while (i < j){
 
  		while (arr[i] < p){
 
			i++;
 		}
		while (arr[j] > p) {
 
 			j--;
 		}	
		if (i <= j) {
 
			int temp = arr[i];
 			arr[i] = arr[j];
 			arr[j] = temp;
 			i++;
 			j--;
 		}
 	}
 	if (i < r){
 
 		quickSort(arr, i, r);
 	}
 	if (l < j){
 
 		quickSort(arr, l, j);
 	}
 }	
int main(){
	int arr[N];
	nhap(arr);
	printf("\nTruoc khi sap xep:");
	xuat(arr);
	printf("\nSau khi sap xep:");
	quickSort(arr,0,N-1);
	xuat(arr);
}
