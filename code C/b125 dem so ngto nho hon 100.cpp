#include<stdio.h>
#include<math.h>
#define NUM 10

void nhap(int arr[]){
	for(int i=0; i<NUM;i++){
		scanf("%ld", &arr[i]);
		
	}
}

void kiemtraNT(int arr[]){
		int bien=0;
		int n;
		int dem=0;
		printf("nhap n:");
		scanf("%ld", &n);
		for(int i=0; i<NUM;i++) {
			if(NUM%arr[i]==0 && arr[i]< 100) {
				if(n==arr[i]){
			
			dem++;
			bien=1;
				}
			}
		}
	
			if(dem==2 )  {
			printf("day la so nguyen to");
	
			}
			else  { 
	printf("day ko la so nguyen to");
			}
	
}


int main() {
	int dem;
 	int arr[NUM];
 	nhap(arr);
 	kiemtraNT(arr);
 	
}
