	#include<stdio.h>
#include<math.h>

#define NUM 10
void nhap(int arr[]) {					// nhao cac so bat ki
	for(int i=0;i< NUM; i++){
		scanf("%ld",&arr[i]);
	}
}

void kiemtra(int arr[]){
	int sochan=0;
	printf("Cac so chan la:");		// tao ham kiemtra thoa man chia het 2 va < 2004
	for(int i=0; i<NUM;i++){
		if(arr[i]%2==0 && arr[i]<2004){
				
				printf("%5d",arr[i]);
				sochan=1;
		}
	
	}
	if(sochan==0) {
		printf("Khong hop le");
}
	
}
void xuat(int arr[]){
	for(int i=0;i< NUM; i++){
		printf("\n%d\n", arr[i]);
	}
}
int main() {
	int arr[NUM];

    nhap(arr);
	kiemtra(arr);
	//xuat(arr)  co the cho mang xuat arr de in hoac la ko
}
