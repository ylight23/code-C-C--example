#include<stdio.h>
#include<math.h>
#define N 100

void nhap(int a[], int &n){
	do{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
		if(n<0 || n>N){
			printf("\nSo phan tu khong hop le.Nhap lai");
		}
	}
	while(n<0 || n>N);
	for(int i=0;i<n;i++){
		printf("\nNhap a[%d]: ",i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	printf("\nMang nhap: ");
	for(int i=0;i<n;i++){
		printf("%4d", a[i]);
	}
	printf("\n");
}
int CheckHoanThien(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		return 1;
	}
	else{
		return 0;
	}
}
//void TimHoanThien(int a[],int n){
//	printf("\nCac so hoan thien: ");
//	for(int i=0;i<n;i++){
//		if (CheckHoanThien(a[i])==1){
//		
//			printf("%4d", a[i]);
//		}
//	}
//}
int NhoHon256(int a[], int n){
	printf("\nSo hoan thien: ");
	for(int i=0;i<n;i++){
		//int Check=CheckHoanThien(a,n);
		if(CheckHoanThien(a[i])==1 && a[i]<256){
			printf("%d", a[i]);	
			return 1;
			
		}
	}

 	return 0;	
}

int main(){
	int a[N];
	int n;
	nhap(a,n);
	xuat(a,n);
	int HoanThien=NhoHon256(a,n);
	if(HoanThien==1){
		printf("\nTon tai");
	}
	else
		printf("\nKhong ton tai");
	//TimHoanThien(a,n);	
	return 0;
}
