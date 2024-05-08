#include<stdio.h>  
#include<math.h>
int main(){{
 

	int n,S;  
	int sum=0;
	int i=0;
	printf("Nhap mot so bat ky: ");  
	scanf("%d",&n);  
	S=n;
	while(S>0) {
   	
 		sum=sum*10+(S%2); 
 		i++;
 		S=S/2;
 	}
 
	printf("\nDang nhi phan cua so vua nhap la = %d",sum);  

}  
