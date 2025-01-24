#include <stdio.h>

#define MAX 100

int main(){
	int a[MAX],n,i;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elemets of array\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
	array_rev(a,n);
}

int array_rev(int [],int);
int array_rev(int b[], int size){
	int a[MAX],i=0,j;
	for (i=0;i<size;i++){
		a[i]=b[size-1-i];
	}
	for (j=0;j<size;j++){
		printf("%d ",a[j]);
	}
	
}
