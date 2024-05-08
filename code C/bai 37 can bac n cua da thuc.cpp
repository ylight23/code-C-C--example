#include<stdio.h>
#include<math.h>

int main() {
	int n;
	float S=sqrt(2);
	
	printf("Nhap n:");
	scanf("%d", &n);
	for(int i=3;i<=n;i++) {
		S=pow(S+i,1.0/(i));
	}
	printf("Tong %f", S);
}
