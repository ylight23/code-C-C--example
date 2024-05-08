#include<stdio.h>
#include<math.h>
# define LENGTH 10		
void nhap(int arr[] ){

	for (int i=0;i< LENGTH; i++) {
		scanf("%ld", &arr[i]);
	}
}
int  max(int arr[]){
	int Max= arr[0];
	for(int i=0; i<LENGTH;i++){
		if(arr[i] > Max){
			Max= arr[i] ;
		}
	}
	return Max;
}
	
	
void xuat(const int arr[]) {
	for(int i=0; i< LENGTH; i++) {
			
		printf("%5d", arr[i]);
	}
}	
int main(){
	int arr[LENGTH];
	
	
	int Max;
	nhap(arr);
	Max= max(arr);
	
	xuat(arr);
		
	printf("\nSo lon nhat trong mang la: %d",Max);
	return 0;
	
}

