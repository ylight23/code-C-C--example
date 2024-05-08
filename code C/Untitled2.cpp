#include <stdio.h>

int main()
{
	float a,b;
	char op;
	printf("Nhap a = ");scanf("%f",&a);
	
	printf("\nNhap b = ");scanf("%f",&b);
	fflush(stdin);
	printf("\nNhap op = ");scanf("%c",&op);
	printf("%c",op);
	
	switch(op)
	{
		case '+':
			printf("%f + %f = %f", a, b, a + b);
			break;
		case '-':
			printf("%f - %f = %f", a, b, a - b);
			break;
		case '*':
			printf("%f * %f = %f", a, b, a * b);
			break;
		case '/':
			printf("%f / %f = %f", a, b, a / b);
			break;
	}
	
	
}

