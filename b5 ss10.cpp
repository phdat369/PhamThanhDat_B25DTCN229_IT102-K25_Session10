#include <stdio.h>
#include <math.h>
int main (){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int array[n];
	int x;
	int count=0;
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("Nhap so can tim : ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(array[i]==x){
			count=count+1;
		}
	}
	printf("Tong so lan xuata hien cua so do trong mang la : %d",count);
}
