#include<stdio.h>
#include<math.h>
#define N 10

void nhap(int arr[]){
	for(int i=0;i<N;i++){
		scanf("%ld", &arr[i]);
	}
}
void xuat(int arr[]){
	for(int i=0; i<N; i++){
		printf("%5ld", arr[i]);
	}
}
int timdoan(int arr[]){
	int x=arr[0];
	for(int i=1; i<N; i++){
		
	//	x=( x > (fabs)(arr[i]) ? x : (fabs)(arr[i]));
		if(x > (fabs)(arr[i])){
			x=x;
		}
		else x = (fabs)(arr[i]);
	}
	return x;
}
int main(){
	int arr[N];
	nhap(arr);
	xuat(arr);
	int x =timdoan(arr);
	printf("\nDoan chua cac gia tri trong mang [-%ld ; %ld]", x,x);
}
