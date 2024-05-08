#include<stdio.h>
#include<math.h>

int main(){
	float a,b;
	char op;
	printf("Nhap a,b :");
	scanf("%f%f", &a, &b);
	fflush(stdin);
	printf("Nhap phep toan :");
	scanf("%c", &op);
	switch(op)
	{
		case'+' :
			printf("%f+ %f = %f", a,b,a+b);
		break;
		case'-' :
			printf("%f - %f = %f", a,b,a-b);
		break;
		case'*' :
		 printf("%f * %f = %f",a,b,a*b);
		break;
		case'/' :
			printf("%f / %f = %f",a,b, a/b);
		break;
		default :
			printf("khong ra ket qua voi %c", op) ;
		break;		
	}
	return 0;
}

