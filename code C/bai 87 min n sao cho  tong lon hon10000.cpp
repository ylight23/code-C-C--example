#include<stdio.h>
#include<math.h>

int main() {
	int n,S;
	S=0;
	int max;
	printf("Nhap n:");
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		S=S+i;
	}
	if(S>10000) {
		max=n;
	}
	printf("Tong %d\n",S);
	printf("So nho nhat %d", max);
	return 0;
}
