#include<stdio.h>
#include<math.h>


int main() {
	int a,b,c;
	printf("Nhap a,b,c:");
	scanf("%d %d %d", &a, &b ,&c);
		
	
	if(a+b>>c || b+c>>a || c+a>>b) {
		printf("day la 1 tam giac thuong\n");
		if(a==b || b==c || c==a) {
			printf("day la tam giac can\n");
			
		}
		else if(a*a + b*b ==c*c || b*b + c*c == a*a || c*c + a*a ==b*b) {
			printf("la 1 tam giac vuong\n");
		}
		else if(a==b==c) {
			printf("day la tam giac deu");
		}
		
	}
		
	if(a+b<=c || b+c<=a || c+a<=b) {
		printf("ko tao thanh 1 tam giac");
	}
	return 0;
}



