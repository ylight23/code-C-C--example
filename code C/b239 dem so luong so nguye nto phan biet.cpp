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


int Ngto(int n){ //kiem tra so nguyen to
	if(n<2){
		return 0; //ko co so nguyen to nao
	}
	for(int i=2;i<=sqrt(n);i++){ 
		if(n%i==0){
			return 0; //day la so hop so co nghiem >2
		}	
	}
	return 1; //neu dung tra ve true
}
int KiemTraTrung(int a[], int n, int j){ //kiem tra tung phan tu co trung hay k
	for(int i=j-1;i>=0;i--){
		if(a[i]==a[j]){
			return 0; //da lap=>false
		}
	}
	return 1;// ko trung phan tu=>true
}
int DemSoLan(int a[], int n, int j){ //dem so lan xuat hien
	int sum=1;
	for(int i=j+1;i<n;i++){
		if(a[i]==a[j]){
			sum++;
		}
	}
	return sum;
}

int DemCacSoNguyenTo(int a[], int n){

	int dem=0;
	for(int i=0;i<n;i++){
		int Check=KiemTraTrung(a,n,i);
		if(Check==1){ //xu li khi ko trung
			int TanSuat=DemSoLan(a,n,i);
			if(Ngto(a[i])==1){
				dem++;
				printf("\nPhan tu %d xuat hien %d lan", a[i] , TanSuat);//dem so lan xuat hien so ngto
			}
			//printf("\nPhan tu %d xuat hien %d lan", a[i], TanSuat);//dem so lan xuat hien phan tu trong mang
		}
	}
	return dem;
}

int main(){
	int n;
	int a[N];
	nhap(a,n);
	xuat(a,n);
	
	int dem=DemCacSoNguyenTo(a,n);
	printf("\nSo luong ngto phan biet: %d", dem);//dem phan biet cac so nguyen to ko trung lap
}
