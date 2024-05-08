#include<stdio.h>
#include<math.h>

int main() {
	int n,S;
	int sum;
	
	printf("Nhap n:");
	scanf("%d", &n);
	S=n;
	
	while(S>0) {
		if(S%2==0) {
			sum=sum+1;
		}
		S=S/10;
	}
	printf("Tong cac chu so chan %d", sum);
	return 0;
	
}
