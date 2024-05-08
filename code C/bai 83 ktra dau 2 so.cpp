#include<stdio.h>

int main() {
	float a,b;
	printf("nhap a,b: \n");
	scanf("%f %f",&a,&b);
	
	if(a*b>0) {
		printf("2 so cung dau");
	}
    if(a*b<0) {
		printf("2 so khac dau");
	}
	if(a*b==0){
		printf("ko xac dinh");
	}
	return 0;
}
