#include<stdio.h>
#include<math.h>
#define NUM 10
//

void nhap(int arr[]) {
	for(int i=0;i <NUM;i++) {
		scanf("%ld", &arr[i]);
		
	}

}
void xuat(int arr[]){
	printf("\nTruoc khi sap xep:");
	for(int i=0;i <NUM;i++) {
		printf("%5ld", arr[i]);
	}
}
void bubbleSort(int arr[]){  /// sap xep noi bot
	
	printf("\nSau khi sap xep:");
	for(int i=0 ;i<NUM;i++){
		for(int j=NUM-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				int tmp = arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
				
			}
		
		}
	printf("%5d",arr[i]);
	}
}	
int main(){
	int arr[NUM];
	nhap(arr);
	xuat(arr);	
	bubbleSort(arr);
	
}	
