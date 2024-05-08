#include<stdio.h>
#include<math.h>

int main() {
	
	int n;
	int S=0;
	
	printf("Nhap n :");
	scanf("%d", &n);
	for(int i=1;i<n;i++) {
		if(n%i==0){
			S=S+i;
		
		}
	}
	if(S==n) {
		printf("day la so hoan thien");
		
	}
	else{
		printf("day khong la so hoan thien");
	}
			
}
