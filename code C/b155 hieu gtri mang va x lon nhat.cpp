#include<stdio.h>
#include<math.h>
#define N 5

void nhap(float a[]){
	for(int i=0;i<N;i++){
		scanf("%f", &a[i]);
	}
}
void xuat(float a[]){
	for(int i=0;i<N;i++){
		printf("%8.3f", a[i]); 
	}
}
void taoMang(float a[], float b[], int x){
	for(int i=0;i<N; i++){
		b[i]=abs(a[i]-x); //tao khoang cach tu x den tung phan tu a[i] dat vao b[i]
	}
}
float timMax(float b[]){
	int Max=b[0];
	for(int i=0; i<N;i++){ //tim gtri lon nhat trong mang ket qua b[i] tim dc o tren
		if(Max < b[i]){
			Max=b[i];
		}
	}
	return Max;
}
void xuatMang(float a[], float b[] ){
	printf("\nGia tri trong mang xa x nhat la:");//hien thi neu hieu do lon nhat trong b[i] thi gtri trong a[i] la nho nhat
	for(int i=0;i<N;i++){
	float Max=timMax(b);
		if(b[i]==Max){
			printf("%8.3f", a[i]);
		}
	}
}
int main(){
	float a[N];
	float b[N];
	nhap(a); //nhap mang a[i]
	xuat(a); // xuat mang b[i]
	float x;
	printf("\nNhap x:"); // nhap gtri x can tinh toan
	scanf("%f",&x);
	taoMang(a,b,x);
	printf("\nKhoang cach x den cac mang:\n",x);
	xuat(b);
	xuatMang(a,b);
}
