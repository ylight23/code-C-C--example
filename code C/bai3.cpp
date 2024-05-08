#include<stdio.h>

int main() {
	printf("Phung Duc Dung\n");
	printf("Bai6\n");
	
	int n,i;
	unsigned long long a=1;
	float Sum=0;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		a=a*i;
		Sum=Sum+ ((1.0)/a);
	}
	printf("Gia tri cua Sum= %f", Sum);
	return 0;
}
		
