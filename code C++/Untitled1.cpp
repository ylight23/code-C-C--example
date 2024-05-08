#include<stdio.h>
#include<math.h>
int *arr, m, n;

void nhap(){
	arr= new int [m*n];
	printf("Nhap kich co ma tran m x n = ");
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++){
		for(int j=0;j<n; j++){
			float tmp;
			printf("\nNhap arr[%d, %d]: ",i, j);
			scanf("%d", &tmp);
			arr[i*m+j]=tmp;
		}
	}
}
void xuat(){
	printf("\nMa tran da nhap: \n");
	for(int i=0;i<m ;i++){
		for(int j=0; j<n; j++){
			
			printf("%4d", arr[i*n + j]);
		}
		printf("\n");
	}
	
}
void sapXep(){
	int tmp[1000];
	int idx=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			tmp[idx++]=new int arr[i][j];
		}
	}	
	
}			
	
void timMax(){
	int max=arr[0];
	for(int i=1;i<m*n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("\nPhan tu lon nhat: %d", max);
}
int main (){
	
	nhap();
	xuat();
	sapXep();
	printf("\nSau khi sap xep:\n");
	xuat();
	timMax();
	
	return 0;
}
