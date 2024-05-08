#include<stdio.h>
#define Max 100 
#define Min 0
 int main() {
 	int A[Max][Min];
 	int i,j,n,m;
 	printf("Nhap n:");
 	scanf("%d", &n);
 	printf("Nhap m");
 	scanf("%d", &m);
 	
 	 while(n>100 || n<0 || m>100 || m<0) {
 	 	printf("\n Nhap lai m:");
 	 	scanf("%d", &m);
 	 	printf("\n Nhap lai n:");
 	 	scanf("%d", &n); }
 	for(i=0; i<m; i++) 	{
	 
	   for (j=0; j<n; j++)
	
		printf("Nhap a[%d][%d]: ", i, j);
		scanf("%d", &A[i][j]);
	}
 
 	for(i=0 ,i<m,i++) {
 		for (j=0,j<n,j++){
 			if(A[i][j] > Max)
 			Max =[a][b]
 			if(A[i][j] < Min)
 			Min =[a][b]
 			
		 }
	 }
 	printf("phan tu lon nhat :%d ",Max);
 	printf("phan tu nho nhat : %d", Min);
 }
