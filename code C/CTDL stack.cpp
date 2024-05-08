#include<stdio.h>

void push(int a[],int &n,int x){
	a[n]=x;
	n++;
}
void nhap(int a[],int &n){
	for(int n=0;n<10;n++){
	
	
		scanf("%ld", &a[n]);
	}
}

int pop(int a[], int &n){
		if(n==0)
			return -1;
		int x=a[n-1];
		n--;
		return x;	
}
void popAll(int a[],int &n){
	while(n>0){
		int x=pop(a,n);
		printf("\nSau khi pop:");
		printf("%5ld",x);
	}
}
int main(){
	int a[10];
	int n=0;
	push(a,n);
	nhap(a);
	popAll(a,n)
}
