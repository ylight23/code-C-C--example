#include<stdio.h>
#include<math.h>

void Nhap(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}
void kiemTraNgTo(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
	}
}
int main()
{
	int n, arr[100];
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n);
	Nhap(arr,n);
	printf("\nDay so nguyen to trong mang la: \n");
	kiemTraNgTo(arr,n);
	
	return 0;
}
