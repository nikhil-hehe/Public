#include <stdio.h>
int fib(int);
int fib(int n){
	if (n==1){
		return 1;
	}
	else if(n==0) {
		return 0;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
	

}




int main(){
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	fib(n);
	
	for (i=1;i<=n;i++){
		printf("%d",fib(i));
	}
}
