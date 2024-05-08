#include<stdio.h>
#include<math.h>
# define N 100

void nhap(int arr[], int &n){
	do{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
		if(n<0 || n>N){
			printf("\nKhong hop le.Nhap lai: ");
		}
	}
	while (n<0 || n>N);
	for(int i=0;i<n; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}
void xuat(int arr[], int n){
	for(int i=0;i<n; i++){
		printf("%4d", arr[i]);
	}
}
bool KiemTra(int arr[], int n, int idx){ //kiem tra bi trung
	for(int i=idx-1;i>=0;i--){
		if(arr[i]==arr[idx]){
			return 0; //bi trung
		}
	}
	return 1;// khog trung
}
//dem tu vi tri hien tai den cuoi mang xem ao nhieu phan tu bi trung
int DemSoLan(int arr[], int n, int idx){
	int dem=1;
	for(int i=idx +1; i<n; i++){

		if(arr[i]==arr[idx]){
			dem++;
							
		}
	}
	return dem;
}
void LietKeOnce(int arr[], int n){
	for(int i=0;i<n;i++){
		int Once=KiemTra(arr,n,i);
		if(Once==1){ 
			int dem=DemSoLan(arr,n,i);
				if(dem==1){  //so lan xuat hien ==1; neu nhieu hon != 1 
					printf("\ncac so xuat hien 1 lan: %d ", arr[i]);
				}
				else{
					printf("\nCac so xuat hien nhieu hon 1 lan: %d",arr[i]);
				}
		}
	}
}

int main(){
	int n;
	int arr[N];
	nhap(arr,n);
	xuat(arr,n);
	LietKeOnce(arr,n);
	return 0;
}
