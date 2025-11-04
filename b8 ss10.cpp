#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int array[n];
	int x;
	int count =0;
	int low=0;
	int hight=n-1;
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("Nhap so can tim : ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep la : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	int mid;
	while(low<=hight){
		mid=(low+hight)/2;
		if(array[mid]==x){
			count++;
			break;
		}
		else {
			if(array[mid]<x){
				low=mid+1;
			}
			else{
				hight=mid-1;
			}
		}
	}
	if(count>0){
		printf("\nPhan tu co trong mang ");
	}
	else {
		printf("\nPhan tu khong co trong mang");
	}
}
