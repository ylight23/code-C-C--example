#include<stdio.h>
#include<math.h>

int main() {
	int n;
	int dem=0;
	printf("nhap n :");
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		if(n%i==0) {
			dem++;
		}
		
	}
	if(dem==2) {
		printf("day la so nguyen to");
	}
	else{ 
	printf("day ko la so nguyen to");
	}
}
