#include<stdio.h>
#include<math.h>

int main() {
	int n,S;
	int sum=0;
	
	printf("Nhap n:");
	scanf("%d",&n);
	S=n;
	while(S>0) {
		sum=sum*10 + S%10;
		S=S/10;
	}
	printf("So nghich dao %d", sum);
	return 0;
}
