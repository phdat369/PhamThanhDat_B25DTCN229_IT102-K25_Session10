#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int array[n];
	int x;
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("Nhap mat hang can xem gia : ");
	scanf("%d",&x);
	printf("Gia cua san pham voi ma ID %d la : %d",x,array[x-1]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\nDanh sach gia san pham sau khi sap xep la : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
