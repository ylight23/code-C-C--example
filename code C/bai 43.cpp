#include<stdio.h>
#include<math.h>

int main() {
	long n;
    int count=0;
	long S;
	
	printf("nhap n :");
	scanf("%ld", &n);
	S=n;
	if(S==0) {
		count=1;
	}
	while(S>0) {
		S=S/10;	
		count=count+1;
	 
	}
	printf("so chu so %ld ", count);
	return 0;
}
