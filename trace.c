#include <stdio.h>
#define MAX 100

int main(){
	int rows,columns,i,j,a[MAX][MAX],sum=0;
	printf("enter number of rows and columns\n");
	scanf("%d%d",&rows,&columns);
		printf("\nRow Major order\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			if (i==j){
				sum=sum+a[i][j];
			}
		}
	}
	printf("sum = %d\n",sum);

}
