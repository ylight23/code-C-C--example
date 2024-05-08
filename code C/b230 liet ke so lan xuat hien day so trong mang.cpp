#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n){
    do{
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }
	while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++){
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n){
	printf("\nMang vua nhap: ");
    for(int i = 0; i < n; i++){
        printf("%4d", a[i]);
    }
    printf("\n");
}


void LietKeTanSuatXuatHien(int a[], int n){
    for(int i = 0; i < n; i++){
        int dem = 0;
        double sum;
        for(int j = 0; j < n; j++){     // j chay tu 0

            if(a[i] == a[j]){
                if(i <= j){
				
                    dem++;    
                }
                else{
                    break;    // bo qua phan tu bi trung
                }
            }
        }
        if(dem != 0){	
        	sum= (double)dem/n*100;
            printf("\nGia tri %d co tan suat xuat hien la %d voi ti le phan tram la %f ", a[i], dem, sum);
        }
    }
}
int main(){
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    LietKeTanSuatXuatHien(a, n);
   
    return 0;
}


