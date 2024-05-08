#include<stdio.h>
#include<math.h>

void Kiemtra(int a, int b ,int c) {
	if(a+b<=c || b+c<=a || a+c<=b) {
		printf("ko hop le");
	}
	else {
		
		if(a==b || b==c || c==a) {
			printf("tam giac can\n");
			
		}
		else if(a*a == b*b+c*c || b*b == c*c+a*a || c*c == a*a+b*b) {
			printf("tam giac vuong\n");
		}
		else if(a==b && b==c) {
			printf(" tam giac deu\n");
		}
		else {
			printf("tam giac thuong\n");
		}
		
	}
		

}
int main() {
	int a,b,c;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("Nhap c:");
	scanf("%d" ,&c);
	
	Kiemtra(a,b,c);
	return 0;
}

