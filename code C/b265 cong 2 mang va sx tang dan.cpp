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
	printf("\nMang nhap: \n");
	for(int i=0;i<n;i++){
		printf("%4d", a[i]);
	}
	printf("\n");
}
void Sort(int &a, int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
void SortArr(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				Sort(a[i], a[j]);
			}
		}
	}
}
int * PlusArr(int a[], int b[], int na, int nb){
	int *c= new int[na+nb];
	for(int i=0;i<na;i++){  //cho mang a[i] dau tien vao truoc
		c[i]=a[i];
	}
	for(int i=0;i<nb;i++){
		c[i+na]=b[i]; //tiep  theo cho mang b[i] vao sau mang a[i] da sap xep truoc
	}
	return c;
	
}
int main(){
	int na,nb;
	int a[N],b[N];
	nhap(a,na);
	xuat(a,na);
	nhap(b,nb);
	xuat(b,nb);
	int *c=PlusArr(a,b,na,nb);
	printf("\nMang tong cua a va b: ");
	xuat(c,na+nb);
	printf("\nMang sau khi sap xep: ");
	SortArr(c,na+nb);
	xuat(c,na+nb);
	return 0;
}
