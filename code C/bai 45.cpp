#include<stdio.h>
#include<math.h>
// bai 45 tinh tich cac chu so

int main() {
	int n;
	int S;
	int sum=1;
	printf("Nhap n : ");
	scanf("%d", &n);
	S=n;
	if(n==0) {
		sum=0;
		
	}
	while(S>0) {
		sum=sum*(S%10);
		S=S/10;
	}
	printf("Tich cac chu so %d", sum);
	return 0;	
}
