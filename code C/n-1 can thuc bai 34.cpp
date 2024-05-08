#include<stdio.h>
#include<math.h>
/// Bai 34 
int main() {
	int n;
	float P=0;
	
	printf("nhap n :");
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		P=sqrt(P+i);
	}
	printf("Tong : %f",P);
	return 0;
}
