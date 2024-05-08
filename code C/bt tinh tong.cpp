#include<stdio.h>
#include<math.h>
//Bai15ting tong
// 1 + 1/1+2 +... +1/(1+....+n)	
int main() {
	int n;
	float P,U;
	
	P=0;
	U=0;
		
	printf("nhap n:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
	 	for(int j=1; j<=i; j++){
	 		U=U+j;	 
		}
		
		if(U!=0){
			P=P+ (1.0/U);
		}
	 	
	 	U=0;
	}	
	 
	 printf("tong : %f", P); 
	 return 0;
}
