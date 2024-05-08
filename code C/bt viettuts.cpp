#include<stdio.h>
#include<math.h>
// giai phuong trinh bac 2 ax^2 +bx +c =0
void(float a, float b , foalt c) // kiem tra he so
 	if(a==0) {
 	   if(b==0) { 
 			printf("phuong trinh vo nghiem");
		 }
		else() {
			printf("phuong trinh co nghiem x=%f", (-c/b));
			return;
	} }
float delta =(b*b) - (4*a*c); // tinh delta
float x1, x2; // tinh nghiem
 if(delta > 0) {
 	x1= (-b +sqrt(delta))/(2*a);
 	x2= (-b + sqrt(delta))/(2*a);
 	printf("phuong trinh co 2 nghiem x1=%d, x2 =%d", x1, x2);
 }
 else if(delta ==0) {
 	x1=(-b/(2*a))
 	printf("phuong trinh co nghiem duy nhat x1,x2 = %d", x1);
 }
 else  { 
 printf("phuong trinh vo nghiem ");
 }


