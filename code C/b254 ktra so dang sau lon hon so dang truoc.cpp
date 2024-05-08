#include<stdio.h>
#include<math.h>
#define N 100
//bai toan vi du nhap mang : 4 6 2 6 9 1 4 7 6
//nhan thay ben phai cung co so 9 lon hon so dang truoc no =>dem =1
//sau so 9 la 1=>break=> tiep tuc duyet mang thi so 7 lon hon cac so dang truoc=> dem=2
//=>sau 7 la6 =>break=> duyet het mang =>dem =2
void nhap(int a[], int &n){
	do{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
		if(n<0 || n>N){
			printf("\nSo phan tu khong hop le.Nhap lai");
		}
	}
	while(n<0 || n>N);
	for(int i=0;i<n;i++){
		printf("\nNhap a[%d]: ",i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	printf("\nMang nhap: ");
	for(int i=0;i<n;i++){
		printf("%4d", a[i]);
	}
	printf("\n");
}
int CheckBigger(int a[], int n){
	int dem=0;
	for(int i=1;i<n;i++){
		int flag=1;
		for(int j=0;j<i;j++){
			if(a[i]<a[j] || a[i]==a[j]){ //mang co cac so ben phai cung lon nhat thi true
				flag=0;					//neu ben phai cung la so be nhat thi break tieptuc xu li mang con tiep theo tim so lon nhat ben phai cung
				break;
			}
		}
		if(flag==1){
			dem++;//dem khi xuat hien dung
			
		}
	}
	return dem;
}
int main(){
	int i;
	int a[N];
	int n;
	nhap(a,n);
	xuat(a,n);
	int dem=CheckBigger(a,n);
	printf("\nSo lan thoa man : %d ", dem);
//	int flag=CheckBigger(a,n);
//	if(flag==1){
//		printf("a[%d]= %d",i, a[i]);
//	}
	return 0;
}
