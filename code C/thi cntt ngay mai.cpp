#include<stdio.h>

int main() {

int arr[3][2] ={10,20,30,40,50,60};
int x =0;
x= arr[1][0]*arr[0][1] + arr[2][1];
printf("%d", x);
return 0; }
