#include<stdio.h>
#include<math.h>

int main() {
	int n=5;
	char A[50];
	char B[50];
	
	printf("nhap mang A:");
	scanf("%s",A);
	printf("\nmang A la: %s",A);
	
	for(int i=0; i<5;i++){
		B[i]=A[4-i];
	}
	
	printf("\nmang B la: %s",B);
	return 0;
}
