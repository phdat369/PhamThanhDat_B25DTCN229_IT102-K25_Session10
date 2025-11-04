#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int array[n];
	int x;
	int temp;
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("Nhap so can tim : ");
	scanf("%d",&x);
	int min=array[0];
	for(int i=0;i<n;i++){
		if(array[i]<min){
			min=array[i];
		}
	}
	printf("\nSo nguyen nho nhat trong mang la : %d",min);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\nMang sau khi sap xep la : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	for(int i=0;i<n;i++){
		if(array[i]==x){
			temp=i;
		}
	}
	printf("\nPhan tu %d co chi so  %d trong mang da sap xep ",x,temp);
}
