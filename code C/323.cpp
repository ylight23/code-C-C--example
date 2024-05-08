#include<stdio.h>
#include<math.h>
int main() {
	int mang[50];
	int count=0;
	
	// nhap mang
	for(int i=0; i<10; i++) {
		scanf("%d", &mang[i]);
	}
	
	for(int i=0; i<10; i++) {
		printf("%d ",mang[i]);
	}
	
	for(int i=0;i< 9;i++){
		if(mang[i]<mang[i+1]) {
			count++;
		}
		else if(mang[i]>mang[i+1]) {
			count--;
		}
		else{ 
			printf("khong tang khong giam");
			return 0;
		}
	} 		
	
	if(count==(10-1)){
		printf("day tang");
	}
	else if(count==-abs(10-1)) { 
		printf("day giam"); 
	}
	else{ 
		printf("ko tang ko giam");
	}
	
 return 0; }
