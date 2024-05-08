#include<stdio.h>
#include<math.h>
//Bai 19 tinh tong
// x+ x^2/1+2 + x^3/1+2+3 +.... +x^n/1+2+3+...+n

int main() {
	int x,n;
	float P,U;
	P=0;
	U=1;
	
	printf("nhap x : ");
	scanf("%d", &x);
	printf("nhap n : ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++) {
		for(int j=1; j<=i*2; j++) {
			U=U*j; // U*=j;
			printf("u, i, j: %f, %d, %d\n ", U,i,j);
			
		}
	 
	 	P=P+(pow(x,i*2))/U;
	 	
	 	U=1;
	}
	printf("Tong : %f ",P);
	return 0;
}
