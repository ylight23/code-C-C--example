#include<stdio.h>
#include<math.h>
#define N 100

int main(){
	int n;
	printf("Nhap n so nguyen duong lien tiep  tu 1 den n: ");
	scanf("%d", &n);
	int sum=0,all=0;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("Tong day n so duong lien tiep tu 1 den n: %d", sum);
	if(sum %n ==0){
		printf("\nTong cac chu so nay chia het cho %d so nguyen duong lien tiep tu 1 den %d", n, n);
		
	}
	else 
		printf("\nTong khong chia het cho %d so nguyen duong lien tiep tu 1 den %d", n, n);
	for(int i=1;i<n;i++){
		all=all+i;
	}
	printf("\nTong %d so nguyen duong lien tiep tu 1 den %d: %d",n-1,n-1, all);	
	//printf("\nTon tai ")
}
