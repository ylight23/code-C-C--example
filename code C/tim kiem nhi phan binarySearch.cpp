#include<stdio.h>
#include<math.h>
#define N 10
/* --- Thuat toan tim kiem nhi phan---
Y tuong: tim phan tu sap xep theo thu tu tang dan va so sanh gtri x can tim voi so phan tu trong mang
\\neu phan tu nay = x tim thay => ket thuc
\\neu phan tu < x can tim => tim kiem ben phai cua phan tu
\\neu phan tu > x can tim => tim kiem ben trai cua phan tu

Thuat toan:
left=0; right =N-1 ; mid=(left + right)/2
\\neu arr[mid]=x => return tim thay x
\\neu arr[mid]<x => left = mid +1;
\\neu arr[mid] > x => right =mid -1;
cho den khi left == right
return ko tim thay

VD cho:  2 4 5 1 6 3 9 8 7 10
	tim x=9 trong day sx tang dan  1 2 3 4 5 6 7 8 9 10
	 						index  0 1 2 3 4 5 6 7 8 9
	 						arr[mid]= arr[4]=5 <9 => tang dan ve ben phai => left = mid +1 =4+1
	 						=> arr[5] =6<0 left = 6+1
	 						......arr[8]=9==9 => tim thay x
*/	 						

void nhap(int arr[]){
	for(int i=0;i <N; i++){
		scanf("%ld ", &arr[i]);
	}
}
void xuat(int arr[]){
	for(int i=0;i <N; i++){
		printf("%5ld", arr[i]);
	}
}
void bubbleSort(int arr[]){
	
	for(int i=0;i<N; i++){
		for(int j=N-1;j >i;j--) {
			if(arr[j-1]>arr[j]) {
			
				int tmp = arr[j];
				arr[j]=arr[j-1];
				arr[j-1]= tmp;
			}
		}
	printf("%5ld", arr[i]);	
	}
}
int binarySearch(int arr[]){
	int left=0, right=N-1;
	int x;
	printf("\n nhap x:");
	scanf("%ld",&x);
	while(left<=right){
		int mid= (left+right)/2;
		if(arr[mid]==x){
			return 1;
		}
		else if(arr[mid]<x){
			left=mid+1;
		}
		else right=mid-1;	
			
	}
	
}
int main(){
	int arr[N];
	nhap(arr);
	xuat(arr);
	bubbleSort(arr);
	binarySearch(arr);
}
