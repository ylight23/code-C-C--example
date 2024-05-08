#include<stdio.h>
#include<math.h>
// Bai 35
int main(){
	int n;
	float P=1;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=2;i<=n;i++) {
		P=sqrt(P+i);
		
	}
	printf("Tong : %f", P);
}
