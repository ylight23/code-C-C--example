#include<stdio.h>
#include<math.h>
// bai 48 tim cs dau tien
int main() {
	int n,S;
	int max;
	
	printf("Nhap n :");
	scanf("%d",&n);
	S=n;
	if(n==0) {
		max=n;
	}
	
	while(S>0) {
		
		max=S%10; // vong lap lay so du cua s/10
		S=S/10;
	
		 }
	printf("Chu so dau tien %d", max);
	return 0;
}
