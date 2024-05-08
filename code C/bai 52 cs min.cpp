#include<stdio.h>
#include<math.h>
// bai 52 tim cs be nhat cua 1 so

int main() {
	int n,S;
	int min; 
	int sum;
	printf("Nhap n:");
	scanf("%d", &n);
	S=n;
	min=n%10; // khoi tao min
	while(S>0) {
		sum=S%10;
		S=S/10;
		if(min>sum) {
			min=sum;
		}
	}
	printf("cs be nhat %d", min);
}
