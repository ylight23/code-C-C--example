#include<stdio.h>

int max(int num1, int num2, int num3){
	int x;
	if(num1 >= num2 && num1 >= num3){
	   x = num1;
}
    else if(num2 >= num1 && num2 >= num3){
	   x = num2;
	}
	else {
	   x = num3;	
	}
	return x;
}
int main() {
	if(3 >= 2 && 2 <= 5){
	printf("true");
}
 	else{
 	printf("false");
}
return 0;
	 }
	
