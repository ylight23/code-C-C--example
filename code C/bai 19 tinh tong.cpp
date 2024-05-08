
#include<stdio.h>
#include<math.h>
// bai 19	
// 1+x +x/3! +x^5/5+...+x^2n+1/(2n+1)!
int main() {
	int x,n;
	float P,U;
	P=0;
	U=1;
	 
	printf("Nhap x : ");
	scanf("%d",&x);
	printf("Nhap n :");
	scanf("%d",&n);
	
	for(int i=0; i<=n;i++){
		for(int j=1;j<=2*i+1;j++) {
			U*=j;
		printf("u, i, j: %f, %d, %d\n ", U,i,j);
		}

	P=P + pow(x,i*2)/U;  U=1;
	}
	printf("tong: %f", P);
	return 0;
}

