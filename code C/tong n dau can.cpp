#include<stdio.h>
#include<math.h>

int main() {
	int n;
	float P=sqrt(2);
	
	
	printf("nhap n :");
	scanf("%d", &n);
	
	for(int i=2;i<=n;i++) {
		
		P=sqrt(P+2);
	}
	printf("tong : %f", P);
	return 0;
}
