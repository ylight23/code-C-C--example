#include<stdio.h>
#include<math.h> /// tim uoc so le lon nhat

int main() {
	int n;
	int dem=0;
	int max=1,dai=1;
	printf("nhap n :");
	scanf("%d", &n);
	for(int i=1; i<n; i++) {
		
		if( n%i==0 && i%2==1) {
			if(max<i) {
				max=i;
				printf("\nmax = %d", max);
			}
			//printf(" %d", i);
		
		
		}
		
		if( n%i==0 && i%2==0) {
			if(dai<i) {
				dai=i;
				printf("\ndai = %d", dai);
			}
			//printf(" %d", i);
		
		
		}
	}
	
	
	printf("\nuoc so chan lon nhat: %d\n", dai);
	printf("uoc so lon nhat: %d\n", max);
	return 0;
} 

