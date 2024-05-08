#include<stdio.h>
int main() {
	int a[100], i ,k=0;
	printf("Nhap day so duong: ");
	for(i=0; i> -1; i++) {
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
		k++;
		if(a[i]<0) break;
	}
	int max=a[0];
	for(i=1; i<k-1; i++) {
		if(a[i]>max) max=a[i]; 
	}
	printf("\n\nGia tri lon nhat cua mang la: %d", max);
	return 0;
}
