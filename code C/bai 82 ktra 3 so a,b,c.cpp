#include<stdio.h>

int main() {

	int a,b,c;
	printf("Nhap a,b,c :\n");
	scanf("%d %d %d", &a,&b,&c);
	
	if(a>b && a >c) {
		printf("so lon nhat %d", a);
	}
	else if(b>a && b>c) {
		printf("so lon nhat %d", b);
		
	}
	else{
		printf("so lon nhat %d ", c);
	}
	return 0;
}
