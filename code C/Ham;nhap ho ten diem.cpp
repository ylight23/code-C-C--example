#include<stdio.h>
#include<math.h>
char name[30];
int toan;
int van;
float diemtrungbinh;
void Nhap(){ 
	printf("\nNhap ho ten:");
	fflush(stdin);
	gets(name);
	
	printf("\nNhap toan:");
	scanf("%d", &toan);
	printf("\nnhap van:");
	scanf("%d", &van);
}
void XuLi() {
	diemtrungbinh = (toan+van)/ 2.0;
	
}
void Xuat(){
	printf("\nHo ten: %s", name);
	printf("\nToan: %d", toan);
	printf("\nVan: %d", van);
	printf("\nDiem trung binh: %f",diemtrungbinh);
}
int main() {
	Nhap();
	XuLi();
	Xuat();
	return 0;
}
	

