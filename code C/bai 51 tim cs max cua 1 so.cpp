#include<stdio.h>
#include<math.h>
//bai 51 tim chu so lon nhat cua 1 so 
int main() {
	int n,S;
	int dem;
	int max;

	printf("Nhap n:");
	scanf("%d", &n);
	S=n;
	while(S>0) {
		dem= S%10;
		S=S/10;
	if(max<dem) { // cho 1 bien max chay va so sanh voi vong lap dem neu < lap cuoi cung thi se = dem do
			max=dem;
		}
	}
	printf("chu so lon nhat la %d", max);
}
