#include<stdio.h>
#include<math.h>
// bai  46 dem cac chu so le cua 1 so duong
int main() {
	int n,S;
	int dem=0;
	
	printf("Nhap n:");
	scanf("%d", &n);
	S=n;
	while(S>0) {
	
	 if (S%2==1) {
		dem=dem+1;
	}
	 S=S/10;
}
	printf("So cac chu so le la %d", dem);
	return 0;
}
