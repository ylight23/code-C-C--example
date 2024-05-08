#include<stdio.h>
#include<math.h>

int main() {
	int n,max,i;
	int S=0;
	
	printf("Nhap n :");
	scanf("%d", &n);
	
	for(int i=1;i<n;i++) {
		S=S+i;
		
	
  	if(S<n ) {
  		max=i;
  			printf("Gia tri k : %d\n", max);
  	  }		
	  }
  			  
	printf("k lon nhat cua tong la : %d\n", max);
	return 0;
}

