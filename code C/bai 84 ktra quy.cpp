#include<stdio.h>
#include<math.h>
int main() {
	int n;
	printf("nhap thang:");
	scanf("%d", &n);
		if(n<=0 || n>12){
			printf("Nhap lai n");
			return n;
		}
		if(n>=1 && n<=3) {
			printf("thuoc quy 1");
		}
		if(n>=4 && n<=6) {
			printf("thuoc quy 2");
		}
		if(n>6 && n<=9) {
			printf("thuoc quy 3");
		}
		if(n>9 && n<=12) {
			printf("thuoc quy 4");
		}
		return 0;
	}

