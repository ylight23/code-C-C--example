#include<stdio.h>
#include<math.h>
#define N 100

void nhap(int arr[N][N], int&m ,int &n){
	do{
		printf("Nhap dong: ");
		scanf("%d", &m);
		if(m<1 || m>N){
			printf("\nDong khong hop le.Nhap lai");
		}
	}
	while(m<1 || m>N);
	

	do{
		printf("\nNhap cot: ");
		scanf("%d", &n);
		if(n<1 ||n>N){
			printf("\nCot khong hop le.Nhap lai");
			
		}
	}
	while(n<1 || n>N);
	for(int i=0;i<m; i++){
		for(int j=0; j<n; j++){
			int tmp;
			printf("\nNhap arr[%d , %d]: ", i, j);
			scanf("%d", &tmp);
			arr[i][j]= tmp;
		}
	}
}
void xuat(int arr[N][N], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}	
void sapXep(int arr[N][N], int m, int n){
	int tmp[1000];
	int idx=0;
	for(int i=0; i<m; i++){
		for(int j=0;j<n; j++){
			tmp[idx++]=arr[i][j];
		}
	}
	for(int i=0; i<idx-1; i++){
		for(int j=i+1;j<idx; j++){
			if(tmp[i]> tmp[j]){
				int temp = tmp[i];
				tmp[i]=tmp[j];
				tmp[j]=temp;
			}
		}
				
	}
	idx=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=tmp[idx++];
		}
	}
}
void timMax(int arr[N][N], int m, int n){
	int max=arr[0][0];
	for(int i=0;i<m; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]> max){
				max= arr[i][j];
			}
		}
	}
	printf("\nGia tri trong mang lon nhat: %d", max);
}
int main(){
	int arr[N][N];
	int m,n;
	nhap(arr,m,n);
	printf("\nTruoc khi sap xep:\n");
	xuat(arr,m,n);
	sapXep(arr, m,n);
	printf("\nSau khi sap xep:\n");
	xuat(arr,m,n);
	timMax(arr, m,n);
}
