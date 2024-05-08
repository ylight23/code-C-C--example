#include<stdio.h>
#include<math.h>
// Bai 44 tinh tong cac chu so

int main() {
	int n;
	int S,sum;
	printf("nhap n: ");
	scanf("%d", &n);
	S=n;
	sum=0;
	if(n==0) {
		
	}
	while(S>0){
		sum=sum+S%10;
		S=S/10;
	}
	printf("Tong cac chu so %d",sum);
	return 0;
}
