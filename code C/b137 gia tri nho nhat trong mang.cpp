#include<stdio.h>
#include<math.h>
#define N 10

void nhap(int arr[]){
	for(int i=0;i<N;i++){
		scanf("%ld",&arr[i]);
	}
}
void xuat(int arr[]){
	for(int i=0;i<N;i++){
		printf("%5ld", arr[i]);
	}
}
int min(int arr[]){
	int MIN=arr[0] ;
	for(int i=0;i<N;i++){
		if(arr[i] <MIN && arr[i]<0){ //gia tri cho ca am lan duong
			MIN=arr[i]; //neu co arr[i] < gt MIN thi dao vitri cho arr[MIN] va arr[i]
		}
	
	}
	return MIN;
}
int main(){
	int arr[N];
	nhap(arr);
	xuat(arr);
	int MIN=min(arr);
	printf("\nGia tri nho nhat: %d",MIN); //in gtri arr[i] la gtri dau tien cua mang da sap xep va cung la GTNN 
	
	
}
