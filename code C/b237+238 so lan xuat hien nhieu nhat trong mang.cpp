#include<stdio.h>
#include<math.h>
#define N 100
void nhap(int a[], int &n){
	do{
		printf("Nhap so phan  tu: ");
		scanf("%d" ,&n);
		if(n<0 || n>N){
			printf("Kiem tra lai dieu kien");
		}
	}
	while(n<0 || n>N);
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]: ", i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n){
	for(int i=0; i<n;i++){
		printf("%4d", a[i]);
	}
}
int DemMax(int a[], int n ){
	int max=1;
	for(int i=0;i<n;i++){
		int dem=1;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
			}
		}
		if(dem>max){ //dk dem max (su dung tuong tu de dem phan tu xuat hien min)
			max=dem;
		}
	}
	return max;
}
int KiemTraTrung(int a[], int n, int j){
	for(int i=j-1;i>=0;i--){
		if(a[i]==a[j]){
			return 0; //da lap=>false
		}
	}
	return 1;// ko trung phan tu=>true
}
int DemSoLan(int a[] ,int n, int j){
	int dem=1; //tinh chinh no
	for(int i=j+1;i<n;i++){
		if(a[i]==a[j]){
			dem++;
		}
	}
	return dem;
}
void LietKeCacSo(int a[], int n){
	int TanSuatMax=DemMax(a,n);
	for(int i=0;i<n;i++){
		int Check=KiemTraTrung(a,n,i);
		if(Check==1){ //xu li khi ko trung
			int TanSuat=DemSoLan(a,n,i);
			if(TanSuat==TanSuatMax){
				printf("\nPhan tu xuat hien nhieu nhat %d", a[i]);
			}
		}
	}
	printf("\nSo lan xuat hien %d", TanSuatMax);
}

int main(){
	int n;
	int a[N];
	nhap(a,n);
	xuat(a,n);
	LietKeCacSo(a,n);
}
