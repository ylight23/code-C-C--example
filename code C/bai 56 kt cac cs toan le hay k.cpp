#include<stdio.h>
#include<math.h>
// bai 56 dem cac chu so le cua 1 so duong
int main() {
	int n,S;
	bool kiemtra=true;// dat ten ham kiem tra dung sai
	
	printf("Nhap n:");
	scanf("%d", &n);
	S=n;
	
	while(S>0) {
	 	if ((S%10)%2 ==0) {
			kiemtra=false;
	
	  	}		
	 	S=S/10;
	} 
	if(kiemtra==true) {
		printf("chu so toan le");
	}
	else{
		printf("ko thoa man");
	}
	return 0;
}
