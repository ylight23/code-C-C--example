#include<stdio.h>
#include<math.h>
// tinh tong Bai 18
//x + x^2/2!+ .... + x^n/ (2n)!
int main() {
	int x,n;
	float S,P;
	S=0;
	P=1;
	
	printf("nhap x :");
	scanf("%d", &x);
	printf("nhap n :");
	scanf("%d",&n);
	for(int i=1; i<=n ; i++) {
		for(int j =1; j<=i ;j++) {
			P=P*P*j;
		}
		S=S+(pow(x,2*i)/(2*P));
		P=1;
	}
	printf("tong: %f", S);
	return 0;
}
