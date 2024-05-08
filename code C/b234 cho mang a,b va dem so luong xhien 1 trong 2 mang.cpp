o=5#include<stdio.h>
#include<math.h>
#define N 100

void nhap(int a[], int &n){
	do{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n<0 || n>N){
			printf("Khong hop le. Nhap lai!");
		}
	}
	while(n<0 || n>N);
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%4d", a[i]);
	}
}

int* Cong2Mang(int a[], int b[],int nA,int nB){ //cong 2 mang A va B
	int *c= new int[nA+nB];
	for(int i=0;i<nA;i++){
		c[i]=a[i];
	}
	for(int i=0;i<nB;i++){
		c[i+nA]=b[i];
	}
	return c;
}
bool KiemTra(int arr[], int n, int idx){ //kiem tra bi trung
	for(int i=idx-1;i>=0;i--){
		if(arr[i]==arr[idx]){
			return 0; //bi trung
		}
	}
	return 1;// khog trung
}
int DemSoLan(int arr[], int n, int idx){
	int dem=1;
	for(int i=idx +1; i<n; i++){

		if(arr[i]==arr[idx]){
			dem++;
							
		}
	}
	return dem;
}
void LietKeOnce(int arr[], int n){
	
	for(int i=0;i<n;i++){
		int Once=KiemTra(arr,n,i);
		if(Once==1){ 
			int dem=DemSoLan(arr,n,i);
				if(dem==1){  //so lan xuat hien ==1; neu nhieu hon != 1 
					printf("\ncac so xuat hien 1 lan: %d ", arr[i]);
					
				}
				else{
					printf("\nCac so xuat hien nhieu hon 1 lan: %d",arr[i]);
				
				}
		}
	}
}
int DemSoLanXuatHienCuaMangATrongMangB(int a[], int b[], int nA, int nB)
{
    int  Start, flag, tmp = 0;
    for(int i = 0; i < nB; i++)        // duy?t m?ng b
    {
        if(a[0] == b[i] && nB - i >= nA)  // n?u mà ph?n t? d?u tiên c?a m?ng a b?ng v?i 1 ph?n t? b?t k? c?a m?ng b
        {                                   // và s? ph?n t? m?ng b dó tr? di i l?n hon ho?c b?ng s? ph?n t? m?ng a
            Start = i;            // bi?n Start s? là bi?n b?t d?u d? d?m, kh?i t?o ngay t?i i th?a DK
            flag = 1;
            for(int j = 0; j < nA; j++)
            {
                if(a[j] != b[Start++])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                tmp++;
            }
        }
    }
    return tmp;
}
int main(){
	int a[N],b[N], nA,nB;
	printf("Nhap mang a: ");
	nhap(a,nA);
	xuat(a,nA);
	printf("\nNhap mang b: ");
	nhap(b,nB);
	xuat(b,nB);

	int *c= Cong2Mang(a,b,nA,nB);
	printf("\nMang c: ");
	xuat(c,nA+nB);
	
	LietKeOnce(c,nA+nB);
	int tmp = DemSoLanXuatHienCuaMangATrongMangB(a, b, nA, nB);
    printf("\nSo lan xuat hien cua mang a trong mang b = %d", tmp);
}




