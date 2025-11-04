#include <stdio.h>
#include <math.h>
int main(){
	int n ,  x;
	int count=0;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("Mang vua nhap la :");
	for(int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
	printf("\nNhap so muon tim thay : ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(array[i]==x){
			printf("%d",i);
			count++;
			break;
		}
	}
	if(count==0){
		printf("Khong tim thay");
	}
}
