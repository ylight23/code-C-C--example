#include<stdio.h>
#include<math.h>

int main(){

	double s;
	int a[100], b[100];
	int n,maxX,maxY;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
	printf("Nhap diem M%d (a[%d] ; b[%d]): ",i,i,i);
	scanf("%d%d",&a[i],&b[i]);
}
/*Tim hinh chu nhat co cac canh song song voi truc toa do chua n diem tren */
	maxX=abs (a[1]);
	maxY=abs (b[1]);
	for(int i=1;i<=n;i++){
		if(maxX<abs (a[i]))
			maxX=abs (a[i]);
		if(maxY<abs (b[i]))
			maxY=abs (b[i]);
	}
	s=maxX*maxY;
	printf("\nDien tich hinh chu nhat co cac canh song song voi truc toa do la :%f",s);

/*Tinh do dai duong gap khuc */
	float S=sqrt((a[n]-a[1])*(a[n]-a[1])+(b[n]-b[1])*(b[n]-b[1]));
	for(int i=2;i<=n;i++){
	
		S=S+sqrt((a[n]-a[1])*(a[n]-a[1])+(b[n]-b[1])*(b[n]-b[1]));
		printf("\nDo dai duong gap khuc=%f",S);
	}
}
