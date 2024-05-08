#include<stdio.h>
#include<math.h>
// bai 47 tinh tong cac chu so chan cua 1 so duong
int main() {
	int n,S;
	int sum=0;
	
	printf("Nhap n:");
	scanf("%d", &n);
	S=n;
	
	if(n==0) { // n=0 tong=0
		sum=n;
	}
	while(S>0) { // n>0 tong cac chu so chan voi phep chia 10 co tong cac so du chia het cho 2 
		if(S%2==0) {
			sum=sum+S%10;
		}
		S=S/10;
	}
	printf("Tong cac chu so chan %d", sum);
	return 0;
	
}
