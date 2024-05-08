#include<stdio.h>
#include<math.h>
// bai 36
int main() {
	int n;
	float P=1;
	int U=1;
	printf("nhap n:");
	scanf("%d", &n);
	for(int i=2;i<=n; i++) {
		for(int j=1;j<=i;j++) {
			U=U*j;
		}
		P=sqrt(P+U);
		U=1;
			
	}
		
	printf("tong da cho : %f", P);
	return 0;
}
