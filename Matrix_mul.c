#include <stdio.h>
#define MAX 100

int main(){
	int arows,acolumns,i,j,k,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX]={0},bcolumns,brows;
	
	printf("enter number of rows and columns of a\n");
	scanf("%d%d",&arows,&acolumns);
	
	printf("\nRow Major order a\n");
	
	for (i=0;i<arows;i++){
		for (j=0;j<acolumns;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter number of rows and columns of b\n");
	scanf("%d%d",&brows,&bcolumns);
	printf("\nRow Major order b\n");
		for (i=0;i<brows;i++){
		for (j=0;j<bcolumns;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	if (acolumns==brows){
		
		for (i=0;i<arows;i++){
			for (j=0;j<bcolumns;j++){
				for (k=0;k<brows;k++){
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		
		
		printf("\na*b\n");
		for (i=0;i<arows;i++){
			for (j=0;j<bcolumns;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("cannot do sum if rows and columns are not equal ");
	}
}
