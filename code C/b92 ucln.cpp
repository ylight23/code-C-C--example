#include<stdio.h>
#include<math.h>

int main() {
	int a,b,i;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	
	if(a==b){
		printf("UCLN:  %d",a);
	}
	if(a>b){
		for(int i=1;i<=a;i++){
			i=a;
			b=a%b;
			i=b;
		}
		printf("UCLN: %d",i);
	}
	
}
