
#include<stdio.h>
#include<math.h>


	 struct sinhvien {
		char name[30];
		int toan;
		int van;
		float diemtrungbinh;
			
};
	int main() {
	
	sinhvien sv1;
	
	printf("nhap ho ten:");
	fflush(stdin);
	gets(sv1.name);
	
	printf("\nNhap toan:");
	scanf("%d", &sv1.toan);
	
	printf("\nnhap van:");
	scanf("%d", &sv1.van);
	printf("\nHo ten: %s", sv1.name);
	printf("\nToan: %d", sv1.toan);
	printf("\nVan: %d", sv1.van);
	printf("\ndiem trung binh : %f", (sv1.van+sv1.toan)/2.0);
	
	return 0;
	
}
