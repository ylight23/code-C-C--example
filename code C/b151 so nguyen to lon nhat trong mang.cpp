#include<stdio.h>
#include<math.h>
#define N 10

void nhap(int arr[]){
	for(int i=0; i<N; i++){
		scanf("%ld",&arr[i]);
	}	
}
bool kiemtraNT(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==2){
		return true;
	}
	else{
	
		return false;
	}
}

int max(int arr[]){
	int nguyentoMax=arr[0];
	for(int i=0;i<N;i++){
		if( kiemtraNT(arr[i])==true && arr[i] > nguyentoMax ){
			nguyentoMax=arr[i];
			
		}
	}
	return nguyentoMax;	
}
void hienthi(int arr[]){
	printf("\nSo nguyen to lon nhat:");
	
		int nguyentoMax=max(arr);
		printf("%ld", nguyentoMax);
	
}
int main(){
	int arr[N];
	nhap(arr);
	
	hienthi(arr);
}	
