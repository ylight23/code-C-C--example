#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int  kiemtraTamGiac(int a, int b, int c){ //kiem tra 3 canh cua tam giac
	if(a+b >c && a+c>b && b+c>a){
		return true;
	}
	else
		return false;	
}
void nhapTamGiac(int arr[], int i){
	do{
		for(int i=0;i<=6;i++){     // nhap 7 so bat ki
			printf("\nNhap arr[%d]= ", i);
			scanf("%d" ,&arr[i]);
			if(arr[i]<10 || arr[i]>100){ //nho hon 10 va be hon 100
				printf("\nNhap lai canh");
				i--;
			}
		}
	}
	while(arr[i]<10 || arr[i]>100);
}
//int KiemTra( int arr[], int idx){//kiem tra bi trung
//	int dem=0;
//	for(int i=0;i<6;i++){
//		
//		if(arr[i]==idx){
//			dem++;
//		}	
//	}	
//	if (dem!=1){
//		return false; //bi trung
//		
//	}
//	return true ;// khog trung
//}
//
//void ListOnce( int arr[],int i){
//	int checktrung=KiemTra(arr,arr[i]);
//	for(int i=0;i<6;i++){
//		
//		if(!checktrung){ 
//			printf("%4d", arr[i]);
//		}
//	}
//}

void xuatTamGiac(int arr[], int i){
	//3 canh bang nhau => tam giac deu
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			for(int k=0;k<6;k++){
				int check=kiemtraTamGiac(arr[i],arr[j],arr[k]); //thoa man dk tam giac
				if(check==1){
					if(arr[i]==arr[j] &&arr[j]==arr[k] )
					printf("\n%d %d %d\n", arr[i], arr[j], arr[k]); //in ra 3 canh tam giac
				}		
			}
		}
	}

	printf("--------------");
	//3 canh ko bang nhau => tam giac thuong
	for(int i=0;i<6;i++){
		for(int j=i+1;j<6;j++){
			for(int k=j+1;k<6;k++){
				int check=kiemtraTamGiac(arr[i],arr[j],arr[k]);
				if(check==1){
					printf("\n%d %d %d\n", arr[i], arr[j], arr[k]);
				}		
			}
		}
	}
}
int main(){
	int arr[5];
	int i;
	nhapTamGiac(arr,i);
//	ListOnce(arr,i);
	xuatTamGiac(arr,i);
	return 0;
}
