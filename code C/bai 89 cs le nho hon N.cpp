#include<stdio.h>
#include<math.h>

int main() {
	int n,S;
	S=0;
	int dem=1;
	printf("Nhap n:");
	scanf("%d", &n);
	for(int i=1;i<n;i++) {
		
	
	if(i%2==1) {
			
			S=S+i;
			
		printf("\ncac so i: %d",i);
		printf("\nTong cac cs le S: %d", S);
		
	} 
	}
	return 0;
} 

