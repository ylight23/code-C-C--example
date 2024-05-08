#include<stdio.h>
#include<math.h>

int main() {
	int n;
	float S=1.0;
	
	printf("Nhap n:");
	scanf("%d", &n);
	for(int i=2;i<=n;i++) {
		S=pow(S+i,1.0/(i+1));
	}
	printf("Tong %f", S);
}
