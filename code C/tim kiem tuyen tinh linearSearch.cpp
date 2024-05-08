#include<stdio.h>
#include<math.h>
#define NUM 10
void nhap(int arr[]){
	for(int i=0;i<NUM; i++){
	
		scanf("%ld", &arr[i]);
	}
}
void xuat(int arr[]){
	for(int i=0; i<NUM; i++){
		printf("%5ld", arr[i]);
	}
}
int linearSearch(int arr[], int x){ //tao mang co gia tri can tim la x
	int bien=0;
	printf("\nNhap x:");
	scanf("%ld", &x);
	for(int i=0; i<NUM; i++){
		if(arr[i]==x){ // gan gt x =arr[i] da nhap trong mang
			bien=1;		// tra ve gt true
		
		}
	
	}
	if(bien==1){		
		printf("hop le"); // khi x thuoc phan tu trong mang
	}
	if(bien==0){
		printf("khong hop le"); // ko thuoc ptu da cho cua mang
	}
}
int main(){
	int x;
	int arr[NUM];
	nhap(arr);
	xuat(arr);
	linearSearch(arr,x);
}
