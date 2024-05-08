#include<stdio.h>
#include<math.h>
#define N 5

void nhap(float a[]){
	for(int i=0;i<N;i++){
		scanf("%f", &a[i]);
	}
}
void xuat(float a[]){
	for(int i=0; i<N;i++){
		printf("%8.3f", a[i]);
	}
}
void taoMang(float a[], float b[], float x){
	for(int i=0;i<N;i++){
		b[i]= abs(a[i]-x);
	}
}
float timMin(float b[]){	
	float Min =b[0];	
	for(int i=0;i<N;i++){
		if(b[i] < Min){
			Min = b[i];
		}
	}
	return Min;
}
void xuatMang(float a[], float b[]){
	printf("\nGia tri trong mang gan x nhat la:");
	for(int i=0; i<N; i++){
		float Min=timMin(b);
		if(b[i]==Min){
			printf("%8.3f",a[i]);
		}
	}
}
int main(){
	float a[N];
	float b[N];
	nhap(a);
	xuat(a);
	float x;
	printf("\nNhap x:");
	scanf("%f", &x);
	taoMang(a,b,x);
	printf("\nKhoang cach x den cac gia tri: \n",x);
	xuat(b);
	xuatMang(a,b);
}
