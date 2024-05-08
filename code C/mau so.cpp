#include<stdio.h>
#include<math.h>
struct phanso{
	float tuso;
	float mauso;
	
}	 e1, e2;
int main(){
	e1.tuso=15;
	e2.mauso=20;
	printf("nhap tu : %f\n ", e1.tuso);
	printf("nhap mau : %f\n", e2.mauso);
	scanf("%f%f", &e1.tuso,&e2.mauso);
	printf("ket qua : %f\n", e1.tuso/e2.mauso);
	return 0;
}
