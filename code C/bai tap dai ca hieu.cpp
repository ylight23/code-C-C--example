#include<stdio.h>

// tinh s= 1^2 +2^2+... + n^2
int main() {
int i,n;
	int sum=0;
	
	 printf("nhap n:");
	 scanf("%d", &n);
	 
	 for(i;i<=n ; i++) { // n=0 => i=1
	 	sum=sum+ i*i; // sum= (n*(n+1)*(2*n+1))/6
	 	
	 }
	 printf("tong : %d", sum);
	 return 0; }

